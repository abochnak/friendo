// Import the Liquid Crystal library
#include <LiquidCrystal.h>

#include "IRremote.h"

//Initialise the LCD with the arduino. LiquidCrystal(rs, enable, d4, d5, d6, d7)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

#include "emojis.h"

const int receiver = 10;      // Signal Pin of IR receiver to Arduino Digital Pin 11
IRrecv irrecv(receiver);     // create instance of 'irrecv'
decode_results results;      // create instance of 'decode_results'

#define MIN_STATE -4
#define FURIOUS_STATE -4
#define SHOCKED_STATE -3
#define ANGRY_STATE -2
#define FROWN_STATE -1
#define MEH_STATE 0
#define SMILE_STATE 1
#define AMAZED_STATE 2
#define MAX_STATE 2
int state = MEH_STATE;

int pos = 6;
void clear_between(int a, int b) {
  for (int i=a; i<b; i++) {
    lcd.setCursor(i, 0); lcd.write(' ');
    lcd.setCursor(i, 1); lcd.write(' ');
  }
}
void press_up() {
  output_state(state+1);
  for (pos=6; pos>=0; pos--) display_state();
  clear_between(0, 4);
  if (state < MAX_STATE) state++;
  init_state();
  for (pos=13; pos>=6; pos--) display_state();
}

void press_down() {
  output_state(state-1);
  for (pos=6; pos<13; pos++) display_state();
  clear_between(12, 16);
  if (state > MIN_STATE) state--;
  init_state();
  for (pos=0; pos<=6; pos++) display_state();
}

void press_vol_down() {
  lcd.clear();
  state = MEH_STATE;
  output_state(state);
  pos = 6;
  init_state();
  display_state();
}

void display_state() {
  clear_between(pos+4, pos+5);
  clear_between(pos-1, pos);
  delay(50);
  switch (state) {
    case FURIOUS_STATE:
      display_furious(pos);
      break;
    case SHOCKED_STATE:
      display_shocked(pos);
      break;
    case ANGRY_STATE:
      display_angry(pos);
      break;
    case FROWN_STATE:
      display_frown(pos);
      break;
    case MEH_STATE:
      display_meh(pos);
      break;
    case SMILE_STATE:
      display_smile(pos);
      break;
    case AMAZED_STATE:
      display_amazed(pos);
      break;
  }
}
void init_state() {
  switch (state) {
    case FURIOUS_STATE:
      init_furious();
      break;
    case SHOCKED_STATE:
      init_shocked();
      break;
    case ANGRY_STATE:
      init_angry();
      break;
    case FROWN_STATE:
      init_frown();
      break;
    case MEH_STATE:
      init_meh();
      break;
    case SMILE_STATE:
      init_smile();
      break;
    case AMAZED_STATE:
      init_amazed();
      break;
  }
}
void output_state(int state) {
  switch (state) {
    case FURIOUS_STATE:
      Serial.println("FURIOUS");
      break;
    case SHOCKED_STATE:
      Serial.println("SHOCKED");
      break;
    case ANGRY_STATE:
      Serial.println("ANGRY");
      break;
    case FROWN_STATE:
      Serial.println("SAD");
      break;
    case MEH_STATE:
      Serial.println("MEH");
      break;
    case SMILE_STATE:
      Serial.println("HAPPY");
      break;
    case AMAZED_STATE:
      Serial.println("AMAZED");
      break;
  }
}
void translateIR() {          // takes action based on IR code received
// describing Remote IR codes 

  switch(results.value){
    case 0xFFA25D: Serial.println("POWER"); break;
    case 0xFFE21D: Serial.println("FUNC/STOP"); break;
    case 0xFF629D: Serial.println("VOL+"); break;
    case 0xFF22DD: Serial.println("FAST BACK");    break;
    case 0xFF02FD: Serial.println("PAUSE");    break;
    case 0xFFC23D: Serial.println("FAST FORWARD");   break;
    case 0xFFE01F: Serial.println("DOWN"); press_down();    break;
    case 0xFFA857: Serial.println("VOL_DOWN"); press_vol_down();   break;
    case 0xFF906F: Serial.println("UP"); press_up();    break;
    case 0xFF9867: Serial.println("EQ");    break;
    case 0xFFB04F: Serial.println("ST/REPT");    break;
    case 0xFF6897: Serial.println("0");    break;
    case 0xFF30CF: Serial.println("1");    break;
    case 0xFF18E7: Serial.println("2");    break;
    case 0xFF7A85: Serial.println("3");    break;
    case 0xFF10EF: Serial.println("4");    break;
    case 0xFF38C7: Serial.println("5");    break;
    case 0xFF5AA5: Serial.println("6");    break;
    case 0xFF42BD: Serial.println("7");    break;
    case 0xFF4AB5: Serial.println("8");    break;
    case 0xFF52AD: Serial.println("9");    break;
    case 0xFFFFFFFF: Serial.println(" REPEAT");break;  

  default: 
    Serial.print(" other button   ");
    Serial.println(results.value);

  }// End Case

} //END translateIR

void setup() {
  // Switch on the LCD screen
  lcd.begin(16, 2);
  // Print these words to my LCD screen
  //lcd.print("HELLO WORLD!");

  init_meh();
  display_meh(6);
  output_state(state);

  Serial.begin(9600);
  Serial.println("MEH"); 
  irrecv.enableIRIn();           // Start the receiver
}

void loop() {
  // put your main code here, to run repeatedly:
  if (irrecv.decode(&results))   // have we received an IR signal?
  {
    translateIR(); 
    delay(500);                 // Do not get immediate repeat
    irrecv.resume();            // receive the next value
  }  
}
