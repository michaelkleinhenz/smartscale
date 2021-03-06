#define imageWidth 128
#define imageHeight 64

const unsigned char splashBitmap [] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00,
0x00, 0x30, 0x00, 0x00, 0x0F, 0xD9, 0xBF, 0x0D, 0x09, 0xE7, 0xCF, 0xDF, 0x37, 0xCC, 0x1F, 0x80,
0x00, 0x20, 0x00, 0x00, 0x0F, 0xD9, 0xBF, 0x0D, 0x9B, 0xF7, 0xEF, 0xDF, 0xB7, 0xEC, 0x1F, 0x80,
0xFF, 0xFF, 0xFF, 0x00, 0x01, 0x09, 0x90, 0x04, 0xD9, 0x32, 0x64, 0x09, 0x92, 0x64, 0x08, 0x00,
0xFF, 0xFF, 0xFF, 0x80, 0x03, 0x1F, 0xBE, 0x0D, 0xFB, 0x06, 0x6F, 0x99, 0xB7, 0xCC, 0x1F, 0x00,
0xFF, 0xFF, 0xFF, 0x80, 0x03, 0x1D, 0xBC, 0x0D, 0xFB, 0x07, 0xCF, 0x19, 0xB7, 0x6C, 0x1E, 0x00,
0x00, 0xC0, 0x1F, 0x00, 0x03, 0x19, 0xB0, 0x0D, 0xBB, 0x37, 0x6C, 0x19, 0xB6, 0x6C, 0x18, 0x00,
0x00, 0x80, 0x1E, 0x00, 0x03, 0x19, 0xBF, 0x0D, 0x9B, 0xF6, 0x6F, 0xDF, 0xB7, 0xEF, 0xDF, 0x80,
0x01, 0x80, 0x3C, 0x00, 0x03, 0x19, 0xBF, 0x0D, 0x99, 0xE6, 0x6F, 0xDF, 0x37, 0xCF, 0x9F, 0x80,
0x01, 0x00, 0x78, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00,
0x03, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xFF, 0xF1, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xFF, 0xE3, 0xC3, 0xF9, 0x83, 0xF8, 0x03, 0xF9, 0xFC, 0x1E, 0xFF, 0xFE, 0xFC, 0x7F, 0xFF, 0x80,
0xFF, 0xC7, 0x87, 0xFF, 0x87, 0xFE, 0x07, 0xFF, 0xBC, 0x0E, 0x3F, 0xFE, 0x3C, 0x3C, 0x7F, 0x80,
0xFF, 0x8F, 0x0F, 0x87, 0x9F, 0x9F, 0x0F, 0x87, 0x9C, 0x0E, 0x03, 0xC2, 0x7E, 0x3C, 0x78, 0x80,
0xFF, 0x1E, 0x1F, 0x03, 0x9E, 0x0F, 0x9F, 0x03, 0x9C, 0x0E, 0x03, 0xC0, 0xFF, 0x1C, 0xF0, 0x00,
0xFE, 0x3C, 0x1E, 0x03, 0x3E, 0x07, 0x9E, 0x03, 0x1C, 0x06, 0x03, 0xC0, 0xF7, 0x0C, 0xF0, 0x00,
0xFE, 0x78, 0x3E, 0x01, 0x3C, 0x07, 0xBE, 0x03, 0xFE, 0xFE, 0x03, 0xC1, 0xE7, 0x9C, 0xF0, 0x00,
0xFC, 0xF0, 0x3C, 0x00, 0x3C, 0x07, 0xBC, 0x01, 0xFF, 0xFC, 0x07, 0xC1, 0xC3, 0x9C, 0xF0, 0x00,
0xF9, 0xE0, 0x3C, 0x00, 0x3C, 0x07, 0xBC, 0x00, 0x1F, 0xF0, 0x07, 0x83, 0xFF, 0xBD, 0xF0, 0x00,
0xF3, 0xC0, 0x3C, 0x00, 0x7E, 0x0F, 0xBC, 0x00, 0x79, 0xF8, 0x07, 0x87, 0x3F, 0xFD, 0xFC, 0x00,
0xE7, 0xC0, 0x3E, 0x00, 0xFE, 0x1F, 0x3E, 0x00, 0xF8, 0xFC, 0x07, 0x8E, 0x0F, 0xFD, 0xFF, 0x80,
0xCF, 0x80, 0x1F, 0x8F, 0xDF, 0x3F, 0x1F, 0x8F, 0xF0, 0x3F, 0x07, 0x1C, 0x01, 0xF9, 0xFF, 0xC1,
0x1F, 0x00, 0x0F, 0xFF, 0x8F, 0xFC, 0x0F, 0xFF, 0xB0, 0x1F, 0xFF, 0x18, 0x00, 0xF1, 0x07, 0xFF,
0x3E, 0x00, 0x03, 0xFF, 0x07, 0xF8, 0x03, 0xFF, 0x30, 0x07, 0xFE, 0x20, 0x00, 0x7C, 0x01, 0xFE,
0xFC, 0x00, 0x01, 0xFC, 0x00, 0x00, 0x01, 0xFC, 0x20, 0x01, 0xEE, 0x00, 0x00, 0x7E, 0x00, 0x78,
0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x67, 0x00, 0x00,
0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x80, 0x00,
0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00,
0xE0, 0x00, 0x00, 0x0F, 0xC1, 0xF8, 0x7E, 0x01, 0xFC, 0xFE, 0x1F, 0xFF, 0xE1, 0xEF, 0xFF, 0xE0,
0xE0, 0x00, 0x00, 0x07, 0xE0, 0xF8, 0x1E, 0x03, 0xFF, 0xDE, 0x0F, 0x7B, 0xF0, 0xE3, 0xFF, 0xE0,
0xE0, 0x00, 0x00, 0x03, 0xF1, 0xF8, 0x3F, 0x07, 0xC3, 0xCE, 0x0F, 0x79, 0xF8, 0xE3, 0xC0, 0x20,
0xE0, 0x00, 0x00, 0x03, 0xF3, 0xF8, 0x7F, 0x8F, 0x81, 0xCE, 0x0F, 0x39, 0xF8, 0xE7, 0x80, 0x00,
0xE0, 0x00, 0x00, 0x03, 0xFF, 0xF8, 0x7B, 0x8F, 0x01, 0x8E, 0x07, 0x19, 0xFC, 0x67, 0xFF, 0x00,
0xE0, 0x00, 0x00, 0x03, 0xFF, 0xF8, 0xF3, 0xDF, 0x01, 0xFF, 0xFF, 0x39, 0xFC, 0xE7, 0xFC, 0x00,
0xE0, 0x00, 0x00, 0x03, 0xFF, 0xF0, 0xE1, 0xDE, 0x00, 0xFF, 0xFF, 0x39, 0xFE, 0xC7, 0xE0, 0x00,
0xE0, 0x00, 0x00, 0x03, 0xBF, 0x71, 0xFF, 0xDE, 0x00, 0x0F, 0xFF, 0x79, 0xFE, 0xCF, 0x80, 0x00,
0xE0, 0x00, 0x00, 0x07, 0x9E, 0x73, 0x9F, 0xFE, 0x00, 0x3C, 0x7E, 0x7B, 0xDF, 0xCF, 0xE0, 0x00,
0xE0, 0x00, 0x00, 0x07, 0x0C, 0x77, 0x07, 0xFF, 0x00, 0x7C, 0x1E, 0x7B, 0xDF, 0xCF, 0xFF, 0x00,
0xE0, 0x00, 0x00, 0x06, 0x08, 0x7E, 0x00, 0xFF, 0xC7, 0xF8, 0x1E, 0x73, 0x1F, 0xCF, 0xFF, 0xC1,
0xE0, 0x00, 0x00, 0x06, 0x00, 0x6C, 0x00, 0x7F, 0xFF, 0xD8, 0x1C, 0xE3, 0x0F, 0x88, 0x3F, 0xFF,
0xE0, 0x00, 0x00, 0x06, 0x00, 0x70, 0x00, 0x3F, 0xFF, 0x98, 0x38, 0xE3, 0x0F, 0x80, 0x01, 0xFE,
0xE0, 0x00, 0x00, 0x04, 0x00, 0xE0, 0x00, 0x0F, 0xFE, 0x10, 0x38, 0xE2, 0x07, 0x80, 0x00, 0x78,
0xE0, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x03, 0x80, 0x00, 0x30, 0xC0, 0x03, 0x00, 0x00, 0x00,
0xE0, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x40, 0x00, 0x31, 0xC0, 0x03, 0x00, 0x00, 0x00,
0xE0, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x21, 0x80, 0x02, 0x00, 0x00, 0x00,
0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char scaleBackground [] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x03, 0xE0, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x07, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x0E, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x1C, 0x00, 0x1F, 0xFC, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x18, 0x00, 0xFF, 0xFF, 0x80, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x38, 0x03, 0xF0, 0x07, 0xE0, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x38, 0x07, 0x80, 0x00, 0xF0, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x30, 0x0E, 0x00, 0x00, 0x38, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x30, 0x0C, 0x01, 0xC0, 0x18, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x30, 0x0E, 0x01, 0xC0, 0x38, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x30, 0x06, 0x01, 0xC0, 0x30, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x30, 0x07, 0x01, 0xC0, 0x70, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x30, 0x03, 0x81, 0xC0, 0xE0, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x30, 0x01, 0xC1, 0xC1, 0xC0, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x30, 0x00, 0xE3, 0xE3, 0x80, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x30, 0x00, 0x7F, 0xFF, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x30, 0x00, 0x3E, 0x3E, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x30, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x30, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x30, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x30, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x30, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x30, 0x1F, 0xFF, 0xFF, 0xFC, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x30, 0x3F, 0xFF, 0xFF, 0xFE, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x30, 0x70, 0x00, 0x00, 0x07, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x30, 0x60, 0x00, 0x00, 0x03, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x30, 0x60, 0x00, 0x00, 0x03, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x30, 0x60, 0x00, 0x00, 0x03, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x30, 0x60, 0x00, 0x00, 0x03, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x30, 0x60, 0x00, 0x00, 0x03, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x30, 0x60, 0x00, 0x00, 0x03, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x30, 0x60, 0x00, 0x00, 0x03, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x30, 0x60, 0x00, 0x00, 0x03, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x30, 0x60, 0x00, 0x00, 0x03, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x30, 0x70, 0x00, 0x00, 0x07, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x38, 0x3F, 0xFF, 0xFF, 0xFE, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x38, 0x1F, 0xFF, 0xFF, 0xFC, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x18, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x1C, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x0E, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x07, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x03, 0xE0, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char setupBackground [] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0xFF, 0xFF, 0xFF, 0xFE, 0x20, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0xFF, 0xFF, 0xBC, 0x3E, 0x20, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0xFF, 0xFF, 0xB8, 0x3E, 0x20, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x00, 0x11, 0xFF, 0xFE, 0x70, 0x7E, 0x20, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x00, 0x11, 0xFF, 0xFD, 0xE1, 0xFE, 0x20, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x00, 0x11, 0xFF, 0xFD, 0xC1, 0xFE, 0x20, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0xC0, 0x06, 0x00, 0x11, 0xFF, 0xF3, 0x83, 0xFE, 0x20, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x40, 0x06, 0x00, 0x11, 0xFF, 0xF7, 0x87, 0xFE, 0x20, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x40, 0x06, 0x00, 0x11, 0xFF, 0xEE, 0x0F, 0xFE, 0x20, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0xC0, 0x06, 0x00, 0x11, 0xFF, 0x9C, 0x3F, 0xFE, 0x20, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x40, 0x06, 0x00, 0x11, 0xFF, 0xBC, 0x3F, 0xFE, 0x20, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x37, 0xD8, 0x00, 0x11, 0xFE, 0x70, 0x7F, 0xFE, 0x20, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x33, 0x88, 0x00, 0x11, 0xFD, 0xE1, 0xFF, 0xFE, 0x20, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x31, 0x18, 0x00, 0x11, 0xFD, 0xE1, 0xFF, 0xFE, 0x20, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x08, 0x30, 0x00, 0x11, 0xF3, 0x83, 0xFF, 0xFE, 0x20, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x18, 0x30, 0x00, 0x11, 0xEF, 0x0F, 0xFF, 0xFE, 0x20, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x31, 0x88, 0x00, 0x11, 0xEE, 0x0F, 0xFF, 0xFE, 0x20, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x30, 0x18, 0x00, 0x11, 0x9C, 0x1F, 0xFF, 0xFE, 0x20, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x30, 0x08, 0x00, 0x11, 0xBC, 0x3F, 0xFF, 0xFE, 0x20, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0xC1, 0x06, 0x00, 0x11, 0xFF, 0xFF, 0xFF, 0xFE, 0x20, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0xC7, 0xC6, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x47, 0xC6, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x4F, 0xF6, 0x00, 0x10, 0x00, 0x0F, 0xC0, 0x00, 0x20, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x00, 0x10, 0x00, 0x0F, 0xC0, 0x00, 0x20, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x00, 0x10, 0x00, 0x0F, 0xC0, 0x00, 0x20, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char wifiIcon [] = {
0x00, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x1F, 0xF8, 0x70, 0x0E, 0xE0, 0x07, 0x07, 0xE0, 0x1E, 0x78,
0x18, 0x18, 0x03, 0xC0, 0x07, 0xE0, 0x00, 0x00, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00
};
