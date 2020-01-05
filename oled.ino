#define OLED_ADDRESS            0x3C
#define OLED_COMMAND_MODE       0x00
#define OLED_DATA_MODE          0x40
#define COL_ADDRESS             0x21
#define PAGE_ADDRESS            0x22

const uint8_t _oled_init[] PROGMEM = {
  0xAE, // oled off
  0xD5, // CLOCK_DIV_RATIO
  0x80,
  0xA8, // Set multiplex
  0x1F, // for 32 rows
  0x8D, // Charge pump
  0x14,
  0x20, // Memory mode
  0x01, // Vertical OLED_ADDRESSing
  0xA1, // Flip horizontally
  0xC8, // Flip vertically
  0x81, // Set contrast
  0xCF, // brighter
  0xDB, // Set vcom detect
  0x40, // brighter
  0xDA,
  0x02,
  0x20,   // address
  0x0,    // col to row
  0xAF,  // Display on*
};

const uint8_t textArea[][8] PROGMEM = {
  {0x8E, 0x5B, 0x59, 0x98, 0x18, 0x19, 0x1B, 0x0E}, // c @ line 0
  {0x01, 0x12, 0x32, 0x79, 0x30, 0x30, 0x34, 0x18}, // t @ line 1
  {0xA2, 0xB6, 0xAA, 0xA2, 0xA2, 0xA2, 0xA2, 0xA2}, // WM @ line 2
  {0xE8, 0x98, 0x98, 0x98, 0xE8, 0x8A, 0x8D, 0x88}, // PW @ line 3
};
void oledInit() {
  Wire.beginTransmission(OLED_ADDRESS);
  Wire.write(OLED_COMMAND_MODE);
  for (uint8_t i = 0; i < 20; i++) Wire.write(pgm_read_byte(&_oled_init[i]));
  Wire.endTransmission();
}

void oledClear() {
  oledRange(9, 127, 0, 3);
  for (uint8_t i = 0; i < 32; i++) {
    Wire.beginTransmission(OLED_ADDRESS);
    Wire.write(OLED_DATA_MODE);
    for (uint8_t i = 0; i < 32; i++) Wire.write(0);
    Wire.endTransmission();
  }
}

void digit(uint8_t temperature, uint8_t line) { //value odd line 191, even line 253
  uint8_t temp = temperature / 2;
  if (temp < 9) {
    temp = 9;
  }

  uint8_t valueF, valueE;
  if (line == 0 || line == 2) {
    valueF = 253;
    valueE = 1;
  }
  else {
    valueF = 191;
    valueE = 128;
  }

  oledRange(9, 127, line, line);

  for (uint8_t i = 9; i < 127; i++) {
    Wire.beginTransmission(OLED_ADDRESS);
    Wire.write(OLED_DATA_MODE);
    for (uint8_t x = 0; x < 7; x++) {
      if (i < temp) Wire.write(valueF);
      else Wire.write(valueE);
      i++;
    }
    i--;
    Wire.endTransmission();
  }
}

void text() {
  for (uint8_t line = 0; line < 4; line++) {

    oledRange(0, 7, line, line);

    Wire.beginTransmission(OLED_ADDRESS);
    Wire.write(OLED_DATA_MODE);
    for (uint8_t x = 0; x < 8; x++) {
      uint8_t bits = pgm_read_byte(&textArea[line][x]);
      Wire.write(bits);
    }
    Wire.endTransmission();
  }
}

void oledRange(uint8_t col1, uint8_t col2, uint8_t pg1, uint8_t pg2) {
  Wire.beginTransmission(OLED_ADDRESS);
  Wire.write(OLED_COMMAND_MODE);
  Wire.write(COL_ADDRESS); Wire.write(col1); Wire.write(col2); // Set column address range
  Wire.write(PAGE_ADDRESS); Wire.write(pg1); Wire.write(pg2); // Set page address range
  Wire.endTransmission();
}

