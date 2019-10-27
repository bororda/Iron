#define OLED_ADDRESS            0x3C
#define OLED_COMMAND_MODE       0x00
//#define OLED_ONE_COMMAND_MODE   0x80
#define OLED_DATA_MODE          0x40
//#define OLED_ONE_DATA_MODE      0xC0

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

const uint8_t CharMap[][6] PROGMEM = {
  { 0x3E, 0x51, 0x49, 0x45, 0x3E, 0x00 }, // 30
  { 0x00, 0x42, 0x7F, 0x40, 0x00, 0x00 },
  { 0x72, 0x49, 0x49, 0x49, 0x46, 0x00 },
  { 0x21, 0x41, 0x49, 0x4D, 0x33, 0x00 },
  { 0x18, 0x14, 0x12, 0x7F, 0x10, 0x00 },
  { 0x27, 0x45, 0x45, 0x45, 0x39, 0x00 },
  { 0x3C, 0x4A, 0x49, 0x49, 0x31, 0x00 },
  { 0x41, 0x21, 0x11, 0x09, 0x07, 0x00 },
  { 0x36, 0x49, 0x49, 0x49, 0x36, 0x00 },
  { 0x46, 0x49, 0x49, 0x29, 0x1E, 0x00 },
};

void oledInit() {
  Wire.beginTransmission(OLED_ADDRESS);
  Wire.write(OLED_COMMAND_MODE);
  for (uint8_t i = 0; i < 20; i++) Wire.write(pgm_read_byte(&_oled_init[i]));
  Wire.endTransmission();
}

void oledClear() {
  Wire.beginTransmission(OLED_ADDRESS);
  Wire.write(OLED_COMMAND_MODE);
  Wire.write(0x21); Wire.write(0); Wire.write(127);
  Wire.write(0x22); Wire.write(0); Wire.write(3);
  Wire.endTransmission();
  for (int i = 0; i < 32; i++) {
    Wire.beginTransmission(OLED_ADDRESS);
    Wire.write(OLED_DATA_MODE);
    for (int i = 0; i < 32; i++) Wire.write(0);
    Wire.endTransmission();
  }
}

void oledStatusUpdate() {
  Wire.beginTransmission(OLED_ADDRESS);
  Wire.write(OLED_COMMAND_MODE);
  // Set column address range
  Wire.write(0x21); Wire.write(0); Wire.write(125); //TODO: unhardcode
  // Set page address range
  Wire.write(0x22); Wire.write(1); Wire.write(1); //TODO: unhardcode
  Wire.endTransmission();

  Wire.beginTransmission(OLED_ADDRESS);
  Wire.write(OLED_DATA_MODE);
  for (uint8_t col = 0 ; col < 6; col++) {
    int bits = pgm_read_byte(&CharMap[0][col]); //TODO: unhardcode
    Wire.write(bits);
    Wire.endTransmission();
  }
}
