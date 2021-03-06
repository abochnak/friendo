import serial
import argparse
import requests

p = argparse.ArgumentParser()
p.add_argument('--name', type=str)
p.add_argument('--url', type=str, default='the.friendo.space', help='URL to your friendo instance')
p.add_argument('--secret', type=str, default='', help='Secret key for your friendo instance')
args = p.parse_args()

# this port address is for the serial tx/rx pins on the GPIO header
SERIAL_PORT = '/dev/cu.usbmodem14101'
# be sure to set this to the same rate used on the Arduino
SERIAL_RATE = 9600


def main():
    ser = serial.Serial(SERIAL_PORT, SERIAL_RATE)
    while True:
        # using ser.readline() assumes each line contains a single reading
        # sent using Serial.println() on the Arduino
        reading = ''
        try:
            reading = ser.readline().decode('utf-8').strip()
        except Exception:
            pass
        # reading is a string...do whatever you want from here
        print(reading)
        if reading in ['FURIOUS', 'SHOCKED', 'ANGRY', 'SAD', 'MEH', 'HAPPY', 'AMAZED']:
            req = requests.post('http://%s/upload' % args.url, {
                'value': reading,
                'name': args.name,
                'secret': args.secret
            })
            print('Upload:', req.text)


if __name__ == "__main__":
    main()