
byte amazed_part0[8] = {0b00000, 0b00000, 0b00000, 0b00000, 0b00011, 0b00001, 0b00010, 0b00000};
byte amazed_part1[8] = {0b00000, 0b00000, 0b10100, 0b10000, 0b11100, 0b11000, 0b00100, 0b00000};
byte amazed_part2[8] = {0b00000, 0b00000, 0b00001, 0b00001, 0b00111, 0b00011, 0b00100, 0b00000};
byte amazed_part3[8] = {0b00000, 0b00000, 0b00000, 0b00000, 0b11000, 0b10000, 0b01000, 0b00000};
byte amazed_part4[8] = {0b00000, 0b01111, 0b01000, 0b01100, 0b00110, 0b00011, 0b00001, 0b00000};
byte amazed_part5[8] = {0b00000, 0b11111, 0b00000, 0b00000, 0b00000, 0b00000, 0b11111, 0b00000};
byte amazed_part6[8] = {0b00000, 0b11111, 0b00000, 0b00000, 0b00000, 0b00000, 0b11111, 0b00000};
byte amazed_part7[8] = {0b00000, 0b11110, 0b00010, 0b00110, 0b01100, 0b11000, 0b10000, 0b00000};

void init_amazed() {
    lcd.createChar(0, amazed_part0);
    lcd.createChar(1, amazed_part1);
    lcd.createChar(2, amazed_part2);
    lcd.createChar(3, amazed_part3);
    lcd.createChar(4, amazed_part4);
    lcd.createChar(5, amazed_part5);
    lcd.createChar(6, amazed_part6);
    lcd.createChar(7, amazed_part7);
}

void display_amazed(int right_pos) {
    lcd.setCursor(right_pos + 0, 0);
    lcd.write(byte(0));
    lcd.setCursor(right_pos + 1, 0);
    lcd.write(byte(1));
    lcd.setCursor(right_pos + 2, 0);
    lcd.write(byte(2));
    lcd.setCursor(right_pos + 3, 0);
    lcd.write(byte(3));
    lcd.setCursor(right_pos + 0, 1);
    lcd.write(byte(4));
    lcd.setCursor(right_pos + 1, 1);
    lcd.write(byte(5));
    lcd.setCursor(right_pos + 2, 1);
    lcd.write(byte(6));
    lcd.setCursor(right_pos + 3, 1);
    lcd.write(byte(7));
}

byte smile_part0[8] = {0b00000, 0b00000, 0b00001, 0b00010, 0b00010, 0b00010, 0b00001, 0b00000};
byte smile_part1[8] = {0b00000, 0b00000, 0b11000, 0b00100, 0b00100, 0b00100, 0b11000, 0b00000};
byte smile_part2[8] = {0b00000, 0b00000, 0b00011, 0b00100, 0b00100, 0b00100, 0b00011, 0b00000};
byte smile_part3[8] = {0b00000, 0b00000, 0b10000, 0b01000, 0b01000, 0b01000, 0b10000, 0b00000};
byte smile_part4[8] = {0b00000, 0b01000, 0b01000, 0b01100, 0b00110, 0b00011, 0b00000, 0b00000};
byte smile_part5[8] = {0b00000, 0b00000, 0b00000, 0b00000, 0b00000, 0b11111, 0b00000, 0b00000};
byte smile_part6[8] = {0b00000, 0b00000, 0b00000, 0b00000, 0b00000, 0b11111, 0b00000, 0b00000};
byte smile_part7[8] = {0b00000, 0b00010, 0b00010, 0b00110, 0b01100, 0b11000, 0b00000, 0b00000};

void init_smile() {
    lcd.createChar(0, smile_part0);
    lcd.createChar(1, smile_part1);
    lcd.createChar(2, smile_part2);
    lcd.createChar(3, smile_part3);
    lcd.createChar(4, smile_part4);
    lcd.createChar(5, smile_part5);
    lcd.createChar(6, smile_part6);
    lcd.createChar(7, smile_part7);
}

void display_smile(int right_pos) {
    lcd.setCursor(right_pos + 0, 0);
    lcd.write(byte(0));
    lcd.setCursor(right_pos + 1, 0);
    lcd.write(byte(1));
    lcd.setCursor(right_pos + 2, 0);
    lcd.write(byte(2));
    lcd.setCursor(right_pos + 3, 0);
    lcd.write(byte(3));
    lcd.setCursor(right_pos + 0, 1);
    lcd.write(byte(4));
    lcd.setCursor(right_pos + 1, 1);
    lcd.write(byte(5));
    lcd.setCursor(right_pos + 2, 1);
    lcd.write(byte(6));
    lcd.setCursor(right_pos + 3, 1);
    lcd.write(byte(7));
}

byte shocked_part0[8] = {0b00000, 0b00000, 0b00001, 0b00010, 0b00010, 0b00010, 0b00001, 0b00000};
byte shocked_part1[8] = {0b00000, 0b00000, 0b11000, 0b00100, 0b00100, 0b00100, 0b11000, 0b00000};
byte shocked_part2[8] = {0b00000, 0b00000, 0b00011, 0b00100, 0b00100, 0b00100, 0b00011, 0b00000};
byte shocked_part3[8] = {0b00000, 0b00000, 0b10000, 0b01000, 0b01000, 0b01000, 0b10000, 0b00000};
byte shocked_part4[8] = {0b00000, 0b00001, 0b00010, 0b00010, 0b00010, 0b00001, 0b00000, 0b00000};
byte shocked_part5[8] = {0b00000, 0b11111, 0b00000, 0b00000, 0b00000, 0b11111, 0b00000, 0b00000};
byte shocked_part6[8] = {0b00000, 0b11111, 0b00000, 0b00000, 0b00000, 0b11111, 0b00000, 0b00000};
byte shocked_part7[8] = {0b00000, 0b10000, 0b01000, 0b01000, 0b01000, 0b10000, 0b00000, 0b00000};

void init_shocked() {
    lcd.createChar(0, shocked_part0);
    lcd.createChar(1, shocked_part1);
    lcd.createChar(2, shocked_part2);
    lcd.createChar(3, shocked_part3);
    lcd.createChar(4, shocked_part4);
    lcd.createChar(5, shocked_part5);
    lcd.createChar(6, shocked_part6);
    lcd.createChar(7, shocked_part7);
}

void display_shocked(int right_pos) {
    lcd.setCursor(right_pos + 0, 0);
    lcd.write(byte(0));
    lcd.setCursor(right_pos + 1, 0);
    lcd.write(byte(1));
    lcd.setCursor(right_pos + 2, 0);
    lcd.write(byte(2));
    lcd.setCursor(right_pos + 3, 0);
    lcd.write(byte(3));
    lcd.setCursor(right_pos + 0, 1);
    lcd.write(byte(4));
    lcd.setCursor(right_pos + 1, 1);
    lcd.write(byte(5));
    lcd.setCursor(right_pos + 2, 1);
    lcd.write(byte(6));
    lcd.setCursor(right_pos + 3, 1);
    lcd.write(byte(7));
}

byte meh_part0[8] = {0b00000, 0b00000, 0b00001, 0b00010, 0b00010, 0b00010, 0b00001, 0b00000};
byte meh_part1[8] = {0b00000, 0b00000, 0b11000, 0b00100, 0b00100, 0b00100, 0b11000, 0b00000};
byte meh_part2[8] = {0b00000, 0b00000, 0b00011, 0b00100, 0b00100, 0b00100, 0b00011, 0b00000};
byte meh_part3[8] = {0b00000, 0b00000, 0b10000, 0b01000, 0b01000, 0b01000, 0b10000, 0b00000};
byte meh_part4[8] = {0b00000, 0b00000, 0b00000, 0b01111, 0b00000, 0b00000, 0b00000, 0b00000};
byte meh_part5[8] = {0b00000, 0b00000, 0b00000, 0b11111, 0b00000, 0b00000, 0b00000, 0b00000};
byte meh_part6[8] = {0b00000, 0b00000, 0b00000, 0b11111, 0b00000, 0b00000, 0b00000, 0b00000};
byte meh_part7[8] = {0b00000, 0b00000, 0b00000, 0b11110, 0b00000, 0b00000, 0b00000, 0b00000};

void init_meh() {
    lcd.createChar(0, meh_part0);
    lcd.createChar(1, meh_part1);
    lcd.createChar(2, meh_part2);
    lcd.createChar(3, meh_part3);
    lcd.createChar(4, meh_part4);
    lcd.createChar(5, meh_part5);
    lcd.createChar(6, meh_part6);
    lcd.createChar(7, meh_part7);
}

void display_meh(int right_pos) {
    lcd.setCursor(right_pos + 0, 0);
    lcd.write(byte(0));
    lcd.setCursor(right_pos + 1, 0);
    lcd.write(byte(1));
    lcd.setCursor(right_pos + 2, 0);
    lcd.write(byte(2));
    lcd.setCursor(right_pos + 3, 0);
    lcd.write(byte(3));
    lcd.setCursor(right_pos + 0, 1);
    lcd.write(byte(4));
    lcd.setCursor(right_pos + 1, 1);
    lcd.write(byte(5));
    lcd.setCursor(right_pos + 2, 1);
    lcd.write(byte(6));
    lcd.setCursor(right_pos + 3, 1);
    lcd.write(byte(7));
}

byte frown_part0[8] = {0b00000, 0b00000, 0b00001, 0b00010, 0b00010, 0b00010, 0b00001, 0b00000};
byte frown_part1[8] = {0b00000, 0b00000, 0b11000, 0b00100, 0b00100, 0b00100, 0b11000, 0b00000};
byte frown_part2[8] = {0b00000, 0b00000, 0b00011, 0b00100, 0b00100, 0b00100, 0b00011, 0b00000};
byte frown_part3[8] = {0b00000, 0b00000, 0b10000, 0b01000, 0b01000, 0b01000, 0b10000, 0b00000};
byte frown_part4[8] = {0b00000, 0b00000, 0b00001, 0b00110, 0b01000, 0b01000, 0b00000, 0b00000};
byte frown_part5[8] = {0b00000, 0b00111, 0b11000, 0b00000, 0b00000, 0b00000, 0b00000, 0b00000};
byte frown_part6[8] = {0b00000, 0b11100, 0b00011, 0b00000, 0b00000, 0b00000, 0b00000, 0b00000};
byte frown_part7[8] = {0b00000, 0b00000, 0b10000, 0b01100, 0b00010, 0b00010, 0b00000, 0b00000};

void init_frown() {
    lcd.createChar(0, frown_part0);
    lcd.createChar(1, frown_part1);
    lcd.createChar(2, frown_part2);
    lcd.createChar(3, frown_part3);
    lcd.createChar(4, frown_part4);
    lcd.createChar(5, frown_part5);
    lcd.createChar(6, frown_part6);
    lcd.createChar(7, frown_part7);
}

void display_frown(int right_pos) {
    lcd.setCursor(right_pos + 0, 0);
    lcd.write(byte(0));
    lcd.setCursor(right_pos + 1, 0);
    lcd.write(byte(1));
    lcd.setCursor(right_pos + 2, 0);
    lcd.write(byte(2));
    lcd.setCursor(right_pos + 3, 0);
    lcd.write(byte(3));
    lcd.setCursor(right_pos + 0, 1);
    lcd.write(byte(4));
    lcd.setCursor(right_pos + 1, 1);
    lcd.write(byte(5));
    lcd.setCursor(right_pos + 2, 1);
    lcd.write(byte(6));
    lcd.setCursor(right_pos + 3, 1);
    lcd.write(byte(7));
}

byte angry_part0[8] = {0b00000, 0b00000, 0b00001, 0b00010, 0b00010, 0b00010, 0b00001, 0b00000};
byte angry_part1[8] = {0b01100, 0b00110, 0b11011, 0b00101, 0b00100, 0b00100, 0b11000, 0b00000};
byte angry_part2[8] = {0b00110, 0b01100, 0b11011, 0b10100, 0b00100, 0b00100, 0b00011, 0b00000};
byte angry_part3[8] = {0b00000, 0b00000, 0b10000, 0b01000, 0b01000, 0b01000, 0b10000, 0b00000};
byte angry_part4[8] = {0b00000, 0b00000, 0b00001, 0b00110, 0b01000, 0b01000, 0b00000, 0b00000};
byte angry_part5[8] = {0b00000, 0b00111, 0b11000, 0b00000, 0b00000, 0b00000, 0b00000, 0b00000};
byte angry_part6[8] = {0b00000, 0b11100, 0b00011, 0b00000, 0b00000, 0b00000, 0b00000, 0b00000};
byte angry_part7[8] = {0b00000, 0b00000, 0b10000, 0b01100, 0b00010, 0b00010, 0b00000, 0b00000};

void init_angry() {
    lcd.createChar(0, angry_part0);
    lcd.createChar(1, angry_part1);
    lcd.createChar(2, angry_part2);
    lcd.createChar(3, angry_part3);
    lcd.createChar(4, angry_part4);
    lcd.createChar(5, angry_part5);
    lcd.createChar(6, angry_part6);
    lcd.createChar(7, angry_part7);
}

void display_angry(int right_pos) {
    lcd.setCursor(right_pos + 0, 0);
    lcd.write(byte(0));
    lcd.setCursor(right_pos + 1, 0);
    lcd.write(byte(1));
    lcd.setCursor(right_pos + 2, 0);
    lcd.write(byte(2));
    lcd.setCursor(right_pos + 3, 0);
    lcd.write(byte(3));
    lcd.setCursor(right_pos + 0, 1);
    lcd.write(byte(4));
    lcd.setCursor(right_pos + 1, 1);
    lcd.write(byte(5));
    lcd.setCursor(right_pos + 2, 1);
    lcd.write(byte(6));
    lcd.setCursor(right_pos + 3, 1);
    lcd.write(byte(7));
}

byte furious_part0[8] = {0b00000, 0b00000, 0b00001, 0b00010, 0b00010, 0b00010, 0b00001, 0b00000};
byte furious_part1[8] = {0b01100, 0b00110, 0b11011, 0b00101, 0b00100, 0b00100, 0b11000, 0b00000};
byte furious_part2[8] = {0b00110, 0b01100, 0b11011, 0b10100, 0b00100, 0b00100, 0b00011, 0b00000};
byte furious_part3[8] = {0b00000, 0b00000, 0b10000, 0b01000, 0b01000, 0b01000, 0b10000, 0b00000};
byte furious_part4[8] = {0b00000, 0b00000, 0b00001, 0b00110, 0b01111, 0b01010, 0b01111, 0b00000};
byte furious_part5[8] = {0b00000, 0b00111, 0b11010, 0b01010, 0b11111, 0b01010, 0b11111, 0b00000};
byte furious_part6[8] = {0b00000, 0b11100, 0b01011, 0b01010, 0b11111, 0b01010, 0b11111, 0b00000};
byte furious_part7[8] = {0b00000, 0b00000, 0b10000, 0b01100, 0b11110, 0b01010, 0b11110, 0b00000};

void init_furious() {
    lcd.createChar(0, furious_part0);
    lcd.createChar(1, furious_part1);
    lcd.createChar(2, furious_part2);
    lcd.createChar(3, furious_part3);
    lcd.createChar(4, furious_part4);
    lcd.createChar(5, furious_part5);
    lcd.createChar(6, furious_part6);
    lcd.createChar(7, furious_part7);
}

void display_furious(int right_pos) {
    lcd.setCursor(right_pos + 0, 0);
    lcd.write(byte(0));
    lcd.setCursor(right_pos + 1, 0);
    lcd.write(byte(1));
    lcd.setCursor(right_pos + 2, 0);
    lcd.write(byte(2));
    lcd.setCursor(right_pos + 3, 0);
    lcd.write(byte(3));
    lcd.setCursor(right_pos + 0, 1);
    lcd.write(byte(4));
    lcd.setCursor(right_pos + 1, 1);
    lcd.write(byte(5));
    lcd.setCursor(right_pos + 2, 1);
    lcd.write(byte(6));
    lcd.setCursor(right_pos + 3, 1);
    lcd.write(byte(7));
}
