import os
import argparse
from PIL import Image

CHR_H = 8
CHR_W = 5

p = argparse.ArgumentParser()
p.add_argument('png', type=str)
p.add_argument('name', type=str)
p.add_argument('--right-pos', type=int, default=None)
args = p.parse_args()


im = Image.open(args.png)
pix = im.load()
#print('size: {}'.format( im.size))

width, height = im.size

partnum = 0
for hstart in range(0, height, CHR_H):
    hregion = range(hstart, hstart + CHR_H)
    for wstart in range(0, width, CHR_W):
        wregion = range(wstart, wstart + CHR_W)
        #print('region:', wregion, hregion)
        bytepart = []
        for h in hregion:
            byt = "0b"
            for w in wregion:
                #print(pix[w,h])
                if sum(pix[w,h]) == 0:
                    byt += "0"
                elif sum(pix[w,h]) != 255 * 4:
                    byt += "1"
                else:
                    byt += "0"
            bytepart.append(byt)
        part = "byte %s_part%d[8] = {%s};" % (args.name, partnum, ", ".join(bytepart))
        partnum += 1
        print(part)
print("")
print("void init_%s() {" % args.name)
for n in range(0, partnum):
    print("    lcd.createChar(%d, %s_part%d);" % (n, args.name, n))
print("}")
print("")
chars_wide = width // CHR_W
chars_high = height // CHR_H
print("void display_%s(int right_pos) {" % args.name)
for n in range(0, partnum):
    h = (1 if n >= chars_wide else 0)
    w = (n-chars_wide if n >= chars_wide else n)
    print("    lcd.setCursor(right_pos + %d, %d);" % (w, h))
    print("    lcd.write(byte(%d));" % n)
print("}")
print("")
if args.right_pos:
    print("display_%s(%d);" % (args.name, args.right_pos))
