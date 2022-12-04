const uint8_t blank[] PROGMEM = { 
0xFF, 0xD8, 0xFF, 0xE0, 0x00, 0x10, 0x4A, 0x46, 0x49, 0x46, 0x00, 0x01, 0x01, 0x00, 0x00, 0x01, 
0x00, 0x01, 0x00, 0x00, 0xFF, 0xDB, 0x00, 0x43, 0x00, 0x05, 0x03, 0x04, 0x04, 0x04, 0x03, 0x05, 
0x04, 0x04, 0x04, 0x05, 0x05, 0x05, 0x06, 0x07, 0x0C, 0x08, 0x07, 0x07, 0x07, 0x07, 0x0F, 0x0B, 
0x0B, 0x09, 0x0C, 0x11, 0x0F, 0x12, 0x12, 0x11, 0x0F, 0x11, 0x11, 0x13, 0x16, 0x1C, 0x17, 0x13, 
0x14, 0x1A, 0x15, 0x11, 0x11, 0x18, 0x21, 0x18, 0x1A, 0x1D, 0x1D, 0x1F, 0x1F, 0x1F, 0x13, 0x17, 
0x22, 0x24, 0x22, 0x1E, 0x24, 0x1C, 0x1E, 0x1F, 0x1E, 0xFF, 0xDB, 0x00, 0x43, 0x01, 0x05, 0x05, 
0x05, 0x07, 0x06, 0x07, 0x0E, 0x08, 0x08, 0x0E, 0x1E, 0x14, 0x11, 0x14, 0x1E, 0x1E, 0x1E, 0x1E, 
0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 
0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 
0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0xFF, 0xC0, 
0x00, 0x11, 0x08, 0x00, 0xF0, 0x00, 0xF0, 0x03, 0x01, 0x22, 0x00, 0x02, 0x11, 0x01, 0x03, 0x11, 
0x01, 0xFF, 0xC4, 0x00, 0x1D, 0x00, 0x01, 0x00, 0x01, 0x05, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x01, 0x04, 0x05, 0x06, 0x07, 0x08, 0x03, 0x09, 
0xFF, 0xC4, 0x00, 0x3A, 0x10, 0x00, 0x02, 0x02, 0x01, 0x02, 0x04, 0x04, 0x05, 0x03, 0x01, 0x07, 
0x03, 0x05, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x03, 0x11, 0x04, 0x21, 0x05, 0x06, 0x12, 0x31, 
0x07, 0x13, 0x41, 0x51, 0x33, 0x53, 0x61, 0x72, 0x91, 0x08, 0x71, 0x81, 0x14, 0x15, 0x22, 0x32, 
0x35, 0xA1, 0xB1, 0xC1, 0x55, 0x73, 0x93, 0x17, 0x52, 0x62, 0xB2, 0xD1, 0xFF, 0xC4, 0x00, 0x18, 
0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x01, 0x02, 0x03, 0x04, 0xFF, 0xC4, 0x00, 0x27, 0x11, 0x01, 0x01, 0x00, 0x02, 0x01, 
0x02, 0x02, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x11, 0x02, 
0x12, 0x21, 0x04, 0x51, 0x05, 0x13, 0x15, 0x33, 0x34, 0x52, 0x53, 0x61, 0x71, 0x91, 0xB1, 0xFF, 
0xDA, 0x00, 0x0C, 0x03, 0x01, 0x00, 0x02, 0x11, 0x03, 0x11, 0x00, 0x3F, 0x00, 0xF2, 0x48, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0B, 0xFE, 0x0D, 0x9F, 0x6B, 
0x26, 0x42, 0xFF, 0x00, 0x83, 0x67, 0xDA, 0xC0, 0x98, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x01, 0x0B, 0xFE, 0x0D, 0x9F, 0x6B, 0x26, 0x42, 0xFF, 0x00, 0x83, 0x67, 
0xDA, 0xC0, 0x98, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x03, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x42, 0xFF, 0x00, 0x83, 0x67, 0xDA, 0xC9, 0x90, 0xBF, 0xE0, 0xD9, 0xF6, 0xB0, 0x26, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0xC6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0xB8, 0xAF, 0x47, 0x6D, 0xD4, 0xD9, 0x76, 0x9A, 0x32, 0xBA, 0x15, 0x25, 0x2B, 0x30, 0xB7, 
0x82, 0xF7, 0x69, 0x6F, 0x8F, 0xAF, 0x6E, 0xD9, 0xC6, 0x51, 0x6E, 0x5D, 0x70, 0xAD, 0x7E, 0xA7, 
0x86, 0xEB, 0x6B, 0xD5, 0xE9, 0x2C, 0x94, 0x2C, 0x83, 0x59, 0x49, 0xED, 0x25, 0x94, 0xDA, 0x6B, 
0xD5, 0x3C, 0x6E, 0x8D, 0xDB, 0x8D, 0xF2, 0x9D, 0x3C, 0x73, 0x82, 0x57, 0xCC, 0x3C, 0xAD, 0xA5, 
0xB1, 0xD8, 0xA8, 0x76, 0xEB, 0xF4, 0x50, 0x49, 0xAA, 0xDA, 0x4D, 0xCE, 0xCA, 0xD2, 0x6D, 0xA8, 
0x2C, 0x3C, 0xA6, 0xB6, 0xF4, 0xD9, 0xA4, 0xAC, 0x9B, 0x1C, 0xFC, 0x0C, 0x61, 0xE1, 0xF7, 0x0C, 
0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0xFF, 0x00, 0x83, 0x67, 0xDA, 0xC9, 0x90, 0xBF, 
0xE0, 0xD9, 0xF6, 0xB0, 0x26, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x06, 0xE7, 0x49, 0xF0, 0x47, 0x8D, 0x6A, 0x74, 0x5C, 
0x76, 0x9A, 0x14, 0xE3, 0x65, 0x0F, 0x30, 0x9D, 0x56, 0xA6, 0xE2, 0xF2, 0xDB, 0x51, 0x49, 0x3C, 
0x35, 0x96, 0xDE, 0x1A, 0xDD, 0xA7, 0xFC, 0xF3, 0x73, 0x2F, 0xCA, 0x77, 0xCB, 0x4D, 0xC6, 0x29, 
0xBE, 0x3B, 0xA8, 0x49, 0x39, 0x2F, 0x75, 0xD9, 0xAF, 0xC3, 0x62, 0x0E, 0xA5, 0xE3, 0xCF, 0x86, 
0xF5, 0xE9, 0xB8, 0x65, 0x7E, 0x20, 0x72, 0xED, 0x34, 0xAE, 0x17, 0xAB, 0x69, 0xEB, 0xB4, 0xF4, 
0x4D, 0x4A, 0x3A, 0x6B, 0x24, 0xDE, 0x27, 0x1C, 0x2D, 0xA1, 0x27, 0x95, 0x8E, 0xCA, 0x49, 0xA4, 
0xF0, 0xD1, 0xC5, 0x8F, 0x64, 0x78, 0x65, 0xC5, 0xE8, 0xE3, 0x9C, 0x1E, 0xDE, 0x1F, 0xC4, 0xA9, 
0xD2, 0x5D, 0xC3, 0x75, 0x55, 0x57, 0x46, 0xA3, 0x4D, 0x29, 0x62, 0x33, 0x84, 0xD3, 0x53, 0xC4, 
0x71, 0x9C, 0xE7, 0x6E, 0xCB, 0x0D, 0x27, 0x9C, 0x9E, 0x66, 0xF1, 0x7B, 0x92, 0xF5, 0x1C, 0x89, 
0xCF, 0x5A, 0xDE, 0x05, 0x6C, 0xE5, 0x76, 0x9D, 0x35, 0x6E, 0x8E, 0xF6, 0xB0, 0xAE, 0xA6, 0x5B, 
0xC5, 0xFE, 0xEB, 0x74, 0xF1, 0xD9, 0xC5, 0xAF, 0x42, 0x8D, 0x3C, 0x06, 0x81, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x85, 0xFF, 0x00, 0x06, 0xCF, 0xB5, 0x93, 0x21, 0x7F, 0xC1, 0xB3, 0xED, 0x60, 0x4C, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xD0, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x03, 0x00, 0x00, 0x0B, 0x2C, 0xCA, 0x72, 0xEB, 0xAD, 0x6A, 0xA6, 0xA7, 0x5C, 0x65, 0x29, 0xA5, 
0x08, 0x4A, 0x52, 0x69, 0x56, 0xDC, 0x96, 0x64, 0xD2, 0xEF, 0xB2, 0x6B, 0x1F, 0x5C, 0xFA, 0x18, 
0xC5, 0xD8, 0xC8, 0xF0, 0x08, 0x5B, 0x76, 0xB6, 0x15, 0x57, 0xBC, 0xA4, 0xD4, 0x56, 0x5A, 0x58, 
0x5B, 0xB7, 0xDF, 0x65, 0xEA, 0x07, 0xA0, 0x3C, 0x3A, 0x7A, 0x79, 0x55, 0x5D, 0xF7, 0xF9, 0xB1, 
0xD2, 0x42, 0xC5, 0x04, 0xDB, 0x51, 0x93, 0x49, 0x26, 0xA5, 0x15, 0x8F, 0x7C, 0xF6, 0xD9, 0x34, 
0xF7, 0xCE, 0x19, 0xB5, 0x7E, 0xA8, 0x39, 0x52, 0xBE, 0x67, 0xF0, 0xCE, 0xAE, 0x65, 0xD1, 0x56, 
0xE7, 0xC4, 0x38, 0x32, 0x57, 0x59, 0xD2, 0x96, 0x67, 0xA6, 0x96, 0x14, 0xFB, 0x7B, 0x3E, 0x99, 
0x7D, 0x17, 0x5B, 0x34, 0xDE, 0x46, 0xAE, 0x34, 0xC5, 0x51, 0x0B, 0x22, 0xF1, 0x66, 0x14, 0x54, 
0xD3, 0xCB, 0xDB, 0xA9, 0xE5, 0x7A, 0x7F, 0x85, 0x67, 0xEA, 0xCE, 0xF1, 0xC9, 0xD0, 0xAB, 0x57, 
0xC3, 0xEC, 0xE1, 0x5A, 0xEA, 0xE5, 0xA8, 0xD3, 0x5F, 0x4C, 0xE9, 0xB6, 0x0A, 0x19, 0x53, 0xAE, 
0x4B, 0xA5, 0xA6, 0xFE, 0xA9, 0xFF, 0x00, 0x1F, 0x93, 0x4A, 0xFC, 0xFE, 0x28, 0xCC, 0xC7, 0x39, 
0xF0, 0x5B, 0xF9, 0x73, 0x9B, 0x78, 0xAF, 0x02, 0xD4, 0xA6, 0xAD, 0xD0, 0x6A, 0xED, 0xA1, 0xB6, 
0xBB, 0xF4, 0xC9, 0xA4, 0xD7, 0xD1, 0xA4, 0x9A, 0xFD, 0xCC, 0x47, 0xA1, 0x94, 0x53, 0xD0, 0x00, 
0x00, 0x00, 0x00, 0x85, 0xFF, 0x00, 0x06, 0xCF, 0xB5, 0x93, 0x21, 0x7F, 0xC1, 0xB3, 0xED, 0x60, 
0x4C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x02, 0x2B, 0x7F, 0xA9, 0xB4, 0xF2, 0xEE, 0x96, 0xAA, 0xEE, 0x85, 0x4F, 0xAA, 0x52, 
0xBD, 0x42, 0x55, 0xCF, 0x0E, 0x2B, 0x29, 0xB4, 0xD6, 0xEF, 0x75, 0x95, 0x8C, 0xE3, 0x1B, 0x3D, 
0xF6, 0x35, 0xCD, 0x15, 0x51, 0xB6, 0xDE, 0x99, 0x5A, 0xAB, 0x49, 0x37, 0x96, 0xB3, 0xBA, 0x5B, 
0x2C, 0x7D, 0x5E, 0x17, 0xD3, 0x39, 0xF4, 0x3A, 0x0F, 0x29, 0xCE, 0xBD, 0x54, 0x20, 0xE8, 0xD3, 
0xD7, 0x5B, 0xA2, 0xC7, 0x6F, 0x5C, 0x9A, 0x73, 0x94, 0x7A, 0x12, 0x49, 0x7B, 0x2E, 0xB8, 0x65, 
0xA4, 0x96, 0xF3, 0x7B, 0xBC, 0x96, 0x0E, 0xA5, 0xC9, 0x9A, 0x05, 0xA5, 0xB6, 0xBA, 0xD5, 0x76, 
0x4E, 0xFC, 0x28, 0x59, 0x29, 0x2E, 0xED, 0x2C, 0xB7, 0x8F, 0x67, 0x87, 0xB7, 0x7D, 0xCE, 0xF1, 
0xCA, 0x1D, 0x34, 0xDF, 0x4C, 0xA3, 0x64, 0x54, 0x3C, 0xB4, 0xA6, 0x96, 0xED, 0xBC, 0xB5, 0xBB, 
0xEF, 0xB3, 0x58, 0x5E, 0xF8, 0x39, 0x3F, 0x26, 0xCA, 0xAD, 0x65, 0x7A, 0x49, 0x46, 0x4A, 0xB5, 
0x9D, 0xD4, 0x52, 0xE9, 0x82, 0x78, 0xCC, 0x9F, 0x6C, 0xBC, 0x27, 0xF8, 0x3A, 0xDF, 0x2D, 0x75, 
0x5F, 0x1A, 0x6B, 0xA9, 0xE6, 0xA5, 0x29, 0x28, 0xCF, 0xA3, 0x1B, 0x26, 0xD6, 0xEB, 0x3E, 0xEB, 
0xD5, 0xEF, 0xDF, 0xD4, 0x34, 0xF2, 0x8F, 0xEB, 0x23, 0x84, 0x47, 0x86, 0xF8, 0xD9, 0xAC, 0xD5, 
0xD7, 0x1E, 0x98, 0xF1, 0x3D, 0x25, 0x1A, 0xB5, 0x8E, 0xD9, 0xE9, 0xE8, 0x7F, 0xEB, 0x5B, 0x7F, 
0xC9, 0xC6, 0x8F, 0x48, 0x7E, 0xBB, 0xF4, 0xD0, 0x8F, 0x36, 0x72, 0xD6, 0xB1, 0x2F, 0xEF, 0x5B, 
0xC3, 0x65, 0x5B, 0x7D, 0xB2, 0xA3, 0x64, 0x9A, 0xFF, 0x00, 0xEC, 0x79, 0xBF, 0x02, 0xB2, 0xA0, 
0x00, 0x80, 0x00, 0x00, 0x42, 0xEF, 0x85, 0x35, 0xFF, 0x00, 0xC4, 0x99, 0x77, 0xC1, 0x6B, 0x8D, 
0xDC, 0x5F, 0x49, 0x55, 0x91, 0x52, 0x84, 0xAE, 0x82, 0x71, 0x6B, 0x29, 0xAE, 0xAD, 0xD3, 0x33, 
0xCB, 0x97, 0x4C, 0xB7, 0xC9, 0xD7, 0x06, 0x2B, 0x97, 0x24, 0xC7, 0xBD, 0x5A, 0xB4, 0x00, 0x1A, 
0x72, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xA0, 0x00, 0x00, 0x09, 0xE0, 0x00, 
0x0C, 0x00, 0x01, 0x2C, 0x95, 0x5B, 0x01, 0xF6, 0xD1, 0x74, 0xF9, 0x8D, 0xBC, 0xE5, 0x61, 0xA4, 
0xBF, 0x74, 0x75, 0x1F, 0x0C, 0xB8, 0x6D, 0xBA, 0xE8, 0x43, 0x4E, 0xA8, 0xC4, 0x26, 0x93, 0x6A, 
0x2F, 0xFB, 0xD6, 0xA4, 0xD6, 0x52, 0xFA, 0xE1, 0xB5, 0xEB, 0xBB, 0x5B, 0x6D, 0xBF, 0x36, 0xD0, 
0x52, 0xDB, 0x6D, 0x6D, 0xB7, 0xA9, 0xDA, 0xFC, 0x14, 0x8D, 0x53, 0xE2, 0x1A, 0x0B, 0x2C, 0xEA, 
0xAD, 0x69, 0xA4, 0xDD, 0xD1, 0x49, 0x27, 0x38, 0xA5, 0x9C, 0x2C, 0xE7, 0xBA, 0x78, 0xED, 0xFF, 
0x00, 0x25, 0x8B, 0x1B, 0xE7, 0x2E, 0x69, 0xDF, 0x0E, 0x7A, 0x7A, 0x35, 0x4D, 0xC6, 0x51, 0x49, 
0xDD, 0xE5, 0x26, 0xFA, 0xDE, 0x13, 0xC2, 0xCB, 0xEC, 0x9B, 0x6B, 0x39, 0x7B, 0xBC, 0x6F, 0x86, 
0x75, 0x7E, 0x47, 0xD5, 0xC6, 0xC8, 0x46, 0xA8, 0xCE, 0x50, 0x8C, 0x24, 0xA2, 0xA3, 0x3C, 0x27, 
0xBB, 0x6F, 0x6C, 0x7A, 0xED, 0xFE, 0xBE, 0xA7, 0x35, 0xE2, 0x57, 0xCA, 0xFE, 0x39, 0x6C, 0x95, 
0x7E, 0x5B, 0x83, 0xC7, 0x4C, 0x25, 0x98, 0xA4, 0xDE, 0x76, 0xC7, 0xBE, 0x73, 0xFC, 0xB7, 0xEA, 
0x6E, 0xBE, 0x1B, 0x46, 0x7A, 0x8E, 0x31, 0x1E, 0xA4, 0xA5, 0x18, 0xAE, 0xB4, 0xDA, 0xDF, 0xDB, 
0xFE, 0x72, 0x15, 0xC8, 0xBF, 0x5E, 0xF3, 0x4F, 0x8F, 0x72, 0xB5, 0x6F, 0xFC, 0x4B, 0x47, 0x6C, 
0x9F, 0xF3, 0x3C, 0x7F, 0xC3, 0x3C, 0xCB, 0xE8, 0x77, 0xEF, 0xD7, 0x37, 0x13, 0xFE, 0xAB, 0xC5, 
0x5D, 0x0F, 0x0E, 0x8C, 0x93, 0x8E, 0x87, 0x85, 0xD6, 0x9C, 0x53, 0xED, 0x39, 0xCE, 0x72, 0x79, 
0xFA, 0xE1, 0xC4, 0xE0, 0x22, 0xB2, 0xA0, 0x18, 0x04, 0x00, 0x00, 0x02, 0xF7, 0x97, 0xBF, 0xCF, 
0x34, 0x5F, 0xF7, 0xE1, 0xFE, 0xE5, 0x91, 0x7B, 0xCB, 0xDF, 0xE7, 0x9A, 0x2F, 0xFB, 0xF0, 0xFF, 
0x00, 0x73, 0x9E, 0x5F, 0x77, 0xC9, 0xEC, 0xF4, 0x77, 0xC5, 0x63, 0xFC, 0xCF, 0xEA, 0xC8, 0x00, 
0x74, 0x78, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x6C, 
0x16, 0x10, 0x18, 0xCF, 0x60, 0x09, 0x7A, 0x97, 0x7A, 0x5D, 0x1D, 0x96, 0x43, 0xCD, 0x6A, 0x2A, 
0x39, 0xC2, 0x4D, 0xA4, 0xE5, 0xFB, 0x2E, 0xEF, 0xBF, 0x7C, 0x60, 0xF8, 0x69, 0xAA, 0xB2, 0xEB, 
0xA3, 0x55, 0x70, 0x94, 0xE5, 0x27, 0x84, 0xA2, 0xB2, 0xDF, 0xEC, 0x6D, 0xBC, 0x1F, 0x49, 0x2A, 
0x38, 0xA4, 0x2C, 0xE2, 0x1A, 0x39, 0xDD, 0x74, 0x1A, 0x83, 0x84, 0xE7, 0x86, 0xDA, 0x58, 0x49, 
0xEC, 0xF3, 0x8C, 0xA4, 0x97, 0x6D, 0x96, 0x53, 0x49, 0xE6, 0xC1, 0xF0, 0xE5, 0xED, 0x1C, 0xB5, 
0x1A, 0x9A, 0xFA, 0x22, 0x9C, 0x9B, 0xC6, 0xEB, 0x64, 0xBD, 0xDF, 0xFA, 0x9D, 0xC7, 0xC3, 0x7A, 
0x9E, 0x87, 0x8E, 0xA9, 0xDB, 0xD1, 0x3F, 0x32, 0xBE, 0xA5, 0xD1, 0xB3, 0x59, 0x4B, 0xB6, 0x3E, 
0x9E, 0xC7, 0x36, 0xE0, 0xF5, 0x5A, 0xF5, 0x2D, 0xC5, 0x46, 0x94, 0xA4, 0xFA, 0xE3, 0x17, 0xB3, 
0xDD, 0xB7, 0xFC, 0x67, 0xD1, 0x7D, 0x0D, 0xEF, 0x94, 0xE5, 0x66, 0x9B, 0x8B, 0xE8, 0xB5, 0x4A, 
0x59, 0x4A, 0x6B, 0x31, 0x5B, 0xB4, 0x9E, 0xD9, 0x7F, 0x92, 0xE9, 0x63, 0xAA, 0xCB, 0x97, 0x75, 
0x17, 0xEA, 0xD5, 0x9A, 0x78, 0xE2, 0xB5, 0x5A, 0x4D, 0x37, 0x8C, 0x61, 0xB4, 0xB3, 0x9F, 0x5C, 
0x24, 0xDF, 0xF3, 0xF4, 0x3A, 0x2F, 0x27, 0xF0, 0x68, 0xF0, 0xBD, 0x13, 0x96, 0x13, 0xB1, 0x57, 
0x16, 0xE7, 0xD9, 0x36, 0xDB, 0x6F, 0x1F, 0xB6, 0x71, 0xFC, 0x18, 0x8E, 0x06, 0xDE, 0xAB, 0x87, 
0xF9, 0xB4, 0x47, 0x0D, 0xB8, 0xBA, 0x93, 0xD9, 0xE5, 0x3C, 0xBC, 0xA4, 0xBB, 0x2C, 0xAC, 0xEF, 
0xDB, 0xDB, 0x27, 0xCF, 0xC5, 0xEE, 0x63, 0x97, 0x22, 0x78, 0x37, 0xC5, 0xF8, 0xB5, 0xDA, 0x88, 
0xAD, 0x74, 0xE9, 0x7A, 0x7D, 0x2E, 0x5E, 0xF2, 0xBA, 0xCC, 0xA8, 0xB4, 0xBD, 0xD2, 0x6E, 0x58, 
0x5E, 0x91, 0x7E, 0xC1, 0x1E, 0x29, 0xF1, 0xC7, 0x98, 0xD7, 0x35, 0x78, 0xAD, 0xC7, 0xF8, 0xCD, 
0x73, 0x52, 0xA2, 0x7A, 0xA7, 0x55, 0x0D, 0x3C, 0xA7, 0x5D, 0x6B, 0xA2, 0x0D, 0x7E, 0xEA, 0x09, 
0xFF, 0x00, 0x26, 0x95, 0xE8, 0x55, 0xB6, 0xDB, 0x93, 0xDD, 0xB7, 0x92, 0x9E, 0x86, 0x45, 0x3E, 
0x81, 0x7F, 0x84, 0x00, 0x00, 0x00, 0x05, 0xDF, 0x05, 0xB2, 0x34, 0xF1, 0x7D, 0x25, 0xB6, 0x49, 
0x46, 0x11, 0xBA, 0x0D, 0xC9, 0xBC, 0x24, 0xBA, 0xB7, 0x6C, 0xB4, 0x21, 0x76, 0xD5, 0x4F, 0xED, 
0x33, 0xCB, 0x8F, 0x54, 0xB3, 0xCD, 0xD7, 0x06, 0x5B, 0x8B, 0x24, 0xC9, 0xAD, 0xD8, 0x98, 0x00, 
0xD3, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x66, 0x57, 0x20, 
0x51, 0x6F, 0xE8, 0x57, 0xF6, 0x45, 0x61, 0x09, 0xC9, 0x4D, 0xC6, 0x32, 0x92, 0x82, 0xCC, 0x9A, 
0x59, 0xC2, 0xCA, 0x59, 0x7E, 0xCB, 0x2D, 0x2F, 0xE5, 0x19, 0x7A, 0xF4, 0x5F, 0xD6, 0x3A, 0x21, 
0xA5, 0xD0, 0xF9, 0x6A, 0x10, 0x51, 0xD9, 0xB9, 0x4E, 0xD9, 0xB7, 0xEA, 0x9B, 0xDB, 0x76, 0x96, 
0xC9, 0x61, 0x63, 0xBB, 0x7B, 0x87, 0xCB, 0x82, 0x42, 0xFA, 0xB5, 0x30, 0xBE, 0x9E, 0xA5, 0x24, 
0xD6, 0x1C, 0x5B, 0x4D, 0xAF, 0x55, 0x94, 0xD3, 0xDD, 0x6D, 0xB3, 0x5D, 0xCE, 0x8F, 0xA2, 0xE1, 
0x52, 0xD4, 0x70, 0x5D, 0x36, 0xAA, 0x72, 0x85, 0x6A, 0xD9, 0x4E, 0x34, 0xBB, 0x1B, 0x94, 0xE7, 
0x18, 0xB4, 0xB2, 0x92, 0xF7, 0x92, 0x9B, 0x6D, 0xE7, 0x3B, 0x25, 0x84, 0x99, 0x87, 0xE5, 0x4E, 
0x0D, 0x6D, 0x3A, 0xE9, 0xCB, 0x53, 0x44, 0x9A, 0xAF, 0x29, 0xF4, 0xF7, 0x4B, 0x1E, 0x98, 0xD9, 
0x36, 0xF0, 0xB2, 0xFB, 0x65, 0xE3, 0x7C, 0x35, 0xD4, 0x39, 0x73, 0x84, 0x3D, 0x5B, 0xD3, 0xBB, 
0xE8, 0xA6, 0xA8, 0xAA, 0xD4, 0x5C, 0x5C, 0xF2, 0xD3, 0x4F, 0x11, 0x69, 0xFA, 0x2E, 0x9C, 0x37, 
0x97, 0xBB, 0x4B, 0x6E, 0xED, 0xEA, 0x45, 0xD3, 0x01, 0xCB, 0xFC, 0x36, 0xDB, 0x27, 0x1A, 0xD4, 
0x25, 0x39, 0xCD, 0xFA, 0xA7, 0xBA, 0xCF, 0xAF, 0xE0, 0xE9, 0xFC, 0xAB, 0xC0, 0x20, 0xBC, 0xBE, 
0xAA, 0xDB, 0xB5, 0xE1, 0xC5, 0x74, 0xF6, 0xF7, 0x65, 0xD7, 0x2D, 0x70, 0x2A, 0x2A, 0xD5, 0xF4, 
0xC2, 0x1E, 0x64, 0x63, 0x24, 0xA5, 0x2C, 0x6D, 0x8F, 0x65, 0xFF, 0x00, 0xE9, 0xD8, 0xB8, 0x6E, 
0x87, 0x47, 0x1D, 0x34, 0x29, 0xD3, 0x51, 0x08, 0xC2, 0x2B, 0xBA, 0x5B, 0xCA, 0x5B, 0x26, 0xDB, 
0xFF, 0x00, 0x6F, 0xE4, 0x5A, 0xAB, 0x4E, 0x5B, 0xE1, 0x4E, 0x9B, 0x25, 0x25, 0x2E, 0xA6, 0xAB, 
0x70, 0xCA, 0x7B, 0x45, 0xBF, 0x6F, 0x67, 0xDB, 0x3B, 0x7B, 0x1E, 0x57, 0xFD, 0x64, 0xF3, 0xFA, 
0xE6, 0x1E, 0x72, 0xAB, 0x94, 0xF8, 0x7D, 0xCE, 0x5C, 0x37, 0x81, 0xE6, 0x36, 0xB8, 0xBC, 0xAB, 
0x35, 0x2D, 0x7F, 0x7D, 0xFD, 0x7A, 0x56, 0x23, 0xF4, 0x7D, 0x47, 0x7E, 0xFD, 0x41, 0x78, 0x85, 
0x47, 0x86, 0x7C, 0x83, 0x37, 0xA2, 0xBA, 0xA7, 0xC7, 0xB8, 0x82, 0x75, 0x68, 0x6B, 0xCA, 0x6E, 
0x3F, 0xFB, 0xAD, 0x6B, 0xDA, 0x29, 0xED, 0x9D, 0x9B, 0x69, 0x6E, 0xB2, 0x78, 0x26, 0xFB, 0xAC, 
0xBE, 0xFB, 0x2F, 0xBE, 0xC9, 0x59, 0x6D, 0x92, 0x72, 0x9C, 0xE4, 0xF2, 0xE4, 0xDB, 0xCB, 0x6D, 
0xFA, 0xB6, 0xCC, 0xB2, 0x81, 0x47, 0xFB, 0x95, 0x28, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x10, 0xBF, 
0xE0, 0xD9, 0xF6, 0xB2, 0x64, 0x2F, 0xF8, 0x36, 0x7D, 0xAC, 0x09, 0x80, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x31, 0xB8, 0x01, 0x86, 0xC3, 0x44, 0x90, 0x11, 0x4B, 0xDC, 0xAC, 0x61, 
0x29, 0x37, 0xD3, 0x19, 0x34, 0x96, 0x5E, 0x16, 0x70, 0x7D, 0x2A, 0xD3, 0xDB, 0x3A, 0xDD, 0x9D, 
0x32, 0x50, 0x4F, 0x0D, 0xE1, 0xE3, 0x3B, 0xBC, 0x7E, 0x13, 0x7F, 0xC1, 0xB7, 0x70, 0x1E, 0x57, 
0xD5, 0xA5, 0xA7, 0x96, 0xAE, 0x71, 0xD3, 0xAB, 0xA1, 0x3B, 0x95, 0x6A, 0x29, 0xD9, 0x2A, 0xE0, 
0x9B, 0xEB, 0x6D, 0xB4, 0xA1, 0x1D, 0x9E, 0xED, 0xAD, 0x93, 0x6D, 0xAD, 0x9B, 0x0C, 0x3F, 0x06, 
0xE1, 0x93, 0xB6, 0x10, 0xB6, 0xD8, 0x47, 0x0E, 0x6A, 0xBA, 0xE0, 0xB0, 0x9D, 0x8D, 0xB6, 0xDB, 
0x6D, 0xB4, 0xB0, 0x92, 0x7E, 0xAB, 0x74, 0x96, 0x56, 0xED, 0x6F, 0x9A, 0x1E, 0x5C, 0xD7, 0x53, 
0xA4, 0xD0, 0xD5, 0xE4, 0xC9, 0xEA, 0x35, 0x30, 0x9B, 0xE9, 0xA3, 0xA2, 0x1E, 0x54, 0xAB, 0x9B, 
0x52, 0x73, 0x9A, 0xEF, 0x87, 0x19, 0xB4, 0x93, 0xC6, 0x1A, 0x6B, 0xB6, 0x16, 0x63, 0x81, 0xF2, 
0xBD, 0xFA, 0xFE, 0x21, 0x55, 0xF5, 0x25, 0x0D, 0x3C, 0xF4, 0xDE, 0x75, 0x56, 0x3B, 0x5C, 0xDD, 
0x54, 0xA7, 0xB3, 0x6D, 0x41, 0x27, 0x36, 0xD3, 0x92, 0x51, 0xDF, 0xB7, 0x6D, 0xCE, 0xAD, 0xCA, 
0x5C, 0x93, 0xA8, 0xE2, 0x3C, 0x42, 0x8D, 0x4F, 0x10, 0xA6, 0xCA, 0x34, 0xB4, 0xD0, 0xEB, 0x50, 
0x94, 0x54, 0x5C, 0xD2, 0x4D, 0x26, 0xA2, 0xF6, 0xC3, 0x4D, 0x3D, 0xF1, 0xBE, 0x5B, 0xC3, 0x6C, 
0xD6, 0x86, 0xBD, 0xCB, 0x5C, 0x99, 0xE6, 0x3A, 0xAA, 0x95, 0x71, 0xAA, 0xB7, 0xD1, 0x63, 0x51, 
0x4A, 0x6D, 0xCD, 0xA9, 0xE5, 0x27, 0xDB, 0x0B, 0x2D, 0x37, 0x97, 0x84, 0xF6, 0x6F, 0x3B, 0xF4, 
0x0E, 0x50, 0xE4, 0xFD, 0x3B, 0xD6, 0xF4, 0xD9, 0x27, 0x1A, 0xAB, 0x87, 0x57, 0x4F, 0xAB, 0x59, 
0x6F, 0x2D, 0xFD, 0x5B, 0x6B, 0xB7, 0xB9, 0xBC, 0x70, 0xDE, 0x01, 0xA5, 0xD3, 0x68, 0xAA, 0xAE, 
0xAA, 0x23, 0x5B, 0xAB, 0xA2, 0x15, 0xB9, 0x37, 0x39, 0xCE, 0x0B, 0x09, 0xCD, 0xE1, 0xEE, 0xDB, 
0x8A, 0xDD, 0xE7, 0x64, 0x9B, 0x5B, 0x99, 0x7D, 0x3E, 0x96, 0x95, 0x55, 0x71, 0x8D, 0x4A, 0x31, 
0x6D, 0x3E, 0x98, 0xAC, 0xCA, 0x4F, 0xBE, 0x5A, 0xF4, 0x7D, 0xB3, 0x91, 0x6A, 0xED, 0xAF, 0x68, 
0x78, 0x1F, 0x45, 0xDE, 0x5E, 0x9D, 0xC9, 0x69, 0xD3, 0x4D, 0xB6, 0xB0, 0xEC, 0x7D, 0xFB, 0x7B, 
0x23, 0xED, 0xE2, 0x37, 0x3C, 0x70, 0x1F, 0x0D, 0x79, 0x52, 0x5C, 0x5B, 0x8E, 0x5F, 0xD7, 0x74, 
0xA2, 0xD6, 0x8F, 0x47, 0x19, 0x2F, 0x33, 0x53, 0x34, 0xB6, 0x8A, 0xF5, 0xC2, 0xD9, 0xB9, 0x3D, 
0x92, 0x7E, 0xAD, 0xA4, 0xF5, 0x7F, 0x18, 0x3C, 0x6E, 0xE5, 0x6F, 0x0E, 0xF4, 0xF7, 0xF0, 0xFD, 
0x14, 0xEB, 0xE2, 0xFC, 0xC4, 0x93, 0x8C, 0x34, 0x95, 0x4B, 0x35, 0xD1, 0x2F, 0x47, 0x6C, 0xD3, 
0xC2, 0xC7, 0xAC, 0x53, 0xCB, 0xEC, 0xF1, 0x9C, 0xAF, 0x16, 0xF3, 0xCF, 0x36, 0xF1, 0xEE, 0x74, 
0xE6, 0x0B, 0xB8, 0xDF, 0x30, 0xEB, 0xAC, 0xD5, 0xEA, 0xAD, 0x78, 0x49, 0xBC, 0x42, 0xA8, 0xE5, 
0xB5, 0x08, 0x2E, 0xCA, 0x2B, 0x3B, 0x25, 0xF5, 0x6F, 0x2D, 0xB6, 0x4D, 0xA3, 0xEB, 0xE2, 0x1F, 
0x38, 0xF1, 0xAE, 0x79, 0xE6, 0x9D, 0x4F, 0x30, 0x71, 0xCB, 0xFC, 0xCD, 0x45, 0xCF, 0x15, 0xC2, 
0x39, 0x50, 0xA6, 0x0B, 0x38, 0x84, 0x17, 0xA2, 0x59, 0x7F, 0xBB, 0x6D, 0xBC, 0xB6, 0xD9, 0xAE, 
0x81, 0x9D, 0xB2, 0x40, 0xFD, 0x8A, 0x7B, 0x95, 0x28, 0x00, 0x0F, 0x40, 0x00, 0x00, 0x00, 0x85, 
0xFF, 0x00, 0x06, 0xCF, 0xB5, 0x93, 0x21, 0x7F, 0xC1, 0xB3, 0xED, 0x60, 0x4C, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x05, 0x61, 0x27, 0x19, 0xA9, 0x24, 0x9B, 0x4D, 0x34, 0x9A, 0x4D, 0x7F, 
0x29, 0xF7, 0x2F, 0x34, 0x3F, 0xD9, 0x8F, 0x4D, 0x28, 0x6A, 0xD6, 0xAA, 0x17, 0xBB, 0x12, 0x8D, 
0xB0, 0x69, 0xC2, 0x30, 0xF5, 0xCC, 0x5A, 0x4D, 0xB5, 0xB3, 0x58, 0x78, 0xFA, 0x7A, 0x96, 0x40, 
0x0D, 0xCF, 0x84, 0xF2, 0x56, 0x9F, 0x8A, 0xCD, 0x57, 0xC2, 0x78, 0xF6, 0x87, 0x5F, 0x6C, 0xE5, 
0xD2, 0xAA, 0x8F, 0x5C, 0x26, 0x93, 0x49, 0x29, 0xB4, 0xD2, 0x4A, 0x3D, 0x4F, 0x1B, 0x36, 0xD6, 
0x32, 0xD2, 0x5B, 0x99, 0xFD, 0x2F, 0x86, 0x3A, 0xDA, 0x78, 0x9C, 0x34, 0x5A, 0x6A, 0xF5, 0xBA, 
0x8D, 0x44, 0x68, 0x56, 0x6A, 0x52, 0x87, 0x97, 0x18, 0x75, 0x45, 0x4A, 0x29, 0xC9, 0xEF, 0x0E, 
0xF0, 0xEE, 0x9B, 0xCB, 0xDB, 0x38, 0x39, 0x6A, 0x33, 0xDC, 0x1F, 0x9C, 0xF9, 0xAF, 0x84, 0xC1, 
0x57, 0xC3, 0xF9, 0x87, 0x89, 0x69, 0xEB, 0x4F, 0x2A, 0x11, 0xBD, 0xB8, 0x7F, 0x31, 0x6D, 0xA7, 
0xDD, 0xF7, 0x43, 0x74, 0x75, 0xAE, 0x15, 0xE1, 0xAE, 0xAA, 0x8D, 0x3E, 0x93, 0x47, 0x66, 0x81, 
0x39, 0x69, 0xAC, 0x9B, 0xD4, 0x59, 0x89, 0xE2, 0xC5, 0x25, 0x84, 0x93, 0x69, 0x36, 0x96, 0x72, 
0xD2, 0x69, 0x3D, 0xD3, 0x68, 0xDA, 0xB8, 0x2F, 0x2B, 0x4E, 0x74, 0xC2, 0x8B, 0x3A, 0xEB, 0xAA, 
0xAB, 0xD5, 0x7D, 0x16, 0x4E, 0x71, 0x4A, 0xB5, 0x94, 0xE2, 0xD2, 0x6B, 0x29, 0xB7, 0x06, 0x9B, 
0xCA, 0xD9, 0xE1, 0x6E, 0x72, 0x0D, 0x2F, 0x8D, 0x1E, 0x20, 0xD0, 0xB1, 0xFD, 0xAF, 0x4D, 0x9B, 
0xC5, 0xB7, 0x3D, 0x1D, 0x4D, 0xBC, 0x76, 0xCB, 0xE9, 0xF6, 0xD8, 0xC8, 0xFF, 0x00, 0xEB, 0xD7, 
0x3F, 0x74, 0xC9, 0x2B, 0x78, 0x66, 0x66, 0xDB, 0x94, 0xBF, 0xA3, 0x59, 0x6D, 0xF7, 0xDB, 0x38, 
0xFF, 0x00, 0x42, 0xF5, 0x7D, 0x97, 0xB3, 0xD0, 0x9C, 0x3B, 0x97, 0x75, 0x71, 0x55, 0x55, 0x65, 
0x74, 0xC7, 0x4F, 0x0B, 0x12, 0x4A, 0xA6, 0x93, 0x6A, 0x3D, 0x96, 0x16, 0xE9, 0x27, 0x8C, 0xBD, 
0xB6, 0x58, 0xC6, 0x32, 0x9E, 0xE7, 0xC1, 0x34, 0x53, 0xD3, 0x2F, 0xEB, 0x2C, 0x94, 0x6B, 0x83, 
0x93, 0x95, 0x96, 0x4D, 0xA7, 0x8C, 0x3C, 0x26, 0xDB, 0xEC, 0xB1, 0xBE, 0x7F, 0x6F, 0xE3, 0xC6, 
0xFC, 0x43, 0xC6, 0x8F, 0x11, 0x35, 0x91, 0x71, 0x7C, 0x77, 0xC8, 0x8B, 0xF4, 0xA7, 0x4F, 0x5C, 
0x1F, 0x6C, 0x6C, 0xFA, 0x72, 0xBF, 0x86, 0x6A, 0x7C, 0x67, 0x99, 0xB9, 0x8B, 0x8C, 0xC7, 0xA3, 
0x8B, 0x71, 0xBE, 0x25, 0xAE, 0x82, 0xED, 0x1B, 0xF5, 0x33, 0x9C, 0x57, 0xEC, 0x9B, 0xC2, 0xFE, 
0x09, 0xBA, 0x76, 0x7B, 0x3B, 0x9A, 0xBC, 0x69, 0xF0, 0xDF, 0x93, 0xD5, 0x95, 0xC7, 0x8A, 0xC7, 
0x8C, 0xEA, 0xE3, 0x17, 0x19, 0x53, 0xC3, 0xDF, 0x9A, 0xDB, 0xF5, 0x4E, 0xCC, 0xF4, 0xAD, 0xF6, 
0xC6, 0x72, 0xBD, 0x8E, 0x03, 0xE2, 0x5F, 0xEA, 0x23, 0x9C, 0x79, 0x9E, 0x36, 0x68, 0x78, 0x23, 
0x8F, 0x2E, 0x70, 0xD9, 0x65, 0x38, 0xE9, 0x66, 0xDE, 0xA2, 0x69, 0xAD, 0xFA, 0xAD, 0xD9, 0xAF, 
0xDA, 0x29, 0x7B, 0x3C, 0x9C, 0x64, 0x64, 0x22, 0xB2, 0x94, 0xA5, 0x27, 0x29, 0x49, 0xB6, 0xDE, 
0x5B, 0x6F, 0x2D, 0x94, 0x1F, 0x52, 0x99, 0x02, 0xA5, 0x18, 0xD8, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x21, 0x7F, 0xC1, 0xB3, 0xED, 0x64, 0xC8, 0x5F, 0xF0, 0x6C, 0xFB, 0x58, 0x13, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x54, 0x53, 0x70, 
0x00, 0x67, 0xD8, 0x7A, 0x80, 0x03, 0x3E, 0xE3, 0x60, 0x00, 0x2C, 0x7A, 0x8D, 0x80, 0x01, 0xB0, 
0x78, 0xF4, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x21, 0x7F, 0xC1, 0xB3, 0xED, 0x64, 0xC8, 0x5F, 
0xF0, 0x6C, 0xFB, 0x58, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x21, 0x7F, 0xC1, 0xB3, 0xED, 0x64, 0xC8, 0x5F, 0xF0, 0x6C, 0xFB, 0x58, 0x13, 0x04, 0x3C, 
0xDA, 0xFE, 0x6C, 0x3F, 0x28, 0x79, 0xB5, 0xFC, 0xD8, 0x7E, 0x50, 0x13, 0x04, 0x3C, 0xDA, 0xFE, 
0x6C, 0x3F, 0x28, 0x79, 0xB5, 0xFC, 0xD8, 0x7E, 0x50, 0x13, 0x04, 0x3C, 0xDA, 0xFE, 0x6C, 0x3F, 
0x28, 0x79, 0xB5, 0xFC, 0xD8, 0x7E, 0x50, 0x13, 0x04, 0x3C, 0xDA, 0xFE, 0x6C, 0x3F, 0x28, 0x79, 
0xB5, 0xFC, 0xD8, 0x7E, 0x50, 0x13, 0x04, 0x3C, 0xDA, 0xFE, 0x6C, 0x3F, 0x28, 0x79, 0xB5, 0xFC, 
0xD8, 0x7E, 0x50, 0x13, 0x04, 0x3C, 0xDA, 0xFE, 0x6C, 0x3F, 0x28, 0x79, 0xB5, 0xFC, 0xD8, 0x7E, 
0x50, 0x13, 0x04, 0x15, 0x95, 0xBE, 0xD6, 0x43, 0xF2, 0x5F, 0x53, 0xC3, 0x38, 0x8D, 0xD5, 0xAB, 
0x2A, 0xD0, 0xEA, 0x27, 0x09, 0x24, 0xE3, 0x25, 0x53, 0x69, 0xA7, 0xD9, 0xA7, 0xEA, 0x8C, 0xDE, 
0x53, 0x8F, 0x7B, 0x74, 0xEB, 0x8B, 0x06, 0x4C, 0xD6, 0xCC, 0x7C, 0x77, 0x62, 0xD0, 0x17, 0xBF, 
0xD8, 0xFC, 0x57, 0xFE, 0x9D, 0xAA, 0xFF, 0x00, 0xC4, 0xC7, 0xF6, 0x3F, 0x15, 0xFF, 0x00, 0xA7, 
0x6A, 0xBF, 0xF1, 0x33, 0x3E, 0xB7, 0x87, 0xCC, 0xEF, 0xEC, 0xFF, 0x00, 0x15, 0xF4, 0xEF, 0xEA, 
0xAC, 0x81, 0x77, 0x6F, 0x0C, 0xE2, 0x34, 0xD7, 0x2B, 0x2D, 0xD0, 0xEA, 0x21, 0x08, 0xAC, 0xCA, 
0x4E, 0xA6, 0x92, 0x4B, 0xBB, 0x6F, 0xD1, 0x16, 0x3E, 0x65, 0x7F, 0x32, 0x1F, 0x93, 0x5C, 0x79, 
0x4E, 0x5D, 0xE5, 0xDB, 0x86, 0x5C, 0x19, 0x31, 0x5D, 0x64, 0xE3, 0xAD, 0xA6, 0x08, 0x79, 0xB5, 
0xFC, 0xD8, 0x7E, 0x50, 0xF3, 0x6B, 0xF9, 0xB0, 0xFC, 0xA3, 0x4E, 0x49, 0x82, 0x1E, 0x6D, 0x7F, 
0x36, 0x1F, 0x94, 0x3C, 0xDA, 0xFE, 0x6C, 0x3F, 0x28, 0x09, 0x82, 0x1E, 0x6D, 0x7F, 0x36, 0x1F, 
0x94, 0x3C, 0xDA, 0xFE, 0x6C, 0x3F, 0x28, 0x09, 0x82, 0x1E, 0x6D, 0x7F, 0x36, 0x1F, 0x94, 0x3C, 
0xDA, 0xFE, 0x6C, 0x3F, 0x28, 0x09, 0x82, 0x1E, 0x6D, 0x7F, 0x36, 0x1F, 0x94, 0x3C, 0xDA, 0xFE, 
0x6C, 0x3F, 0x28, 0x09, 0x90, 0xBF, 0xE0, 0xD9, 0xF6, 0xB1, 0xE6, 0xD7, 0xF3, 0x61, 0xF9, 0x44, 
0x6D, 0xB2, 0x0E, 0xA9, 0xA5, 0x38, 0xB6, 0xD3, 0xC2, 0x4D, 0x7B, 0x01, 0xFF, 0xD9
};
