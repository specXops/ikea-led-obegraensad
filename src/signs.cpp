#include "signs.h"

std::vector<int> letterU = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x07, 0xe0, 0x03, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

std::vector<int> letterR = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xc0, 0x06, 0x60, 0x06, 0x60, 0x06, 0x40, 0x07, 0x80, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

std::vector<int> degreeSymbol = {
    0x33, 0x00, 0x00};

std::vector<int> minusSymbol = {
    0x00, 0xF0, 0x00};

std::vector<std::vector<int>> smallNumbers = {
    {0x75, 0x55, 0x70}, // 0
    {0x13, 0x11, 0x10}, // 1
    {0x71, 0x74, 0x70}, // 2
    {0x71, 0x71, 0x70}, // 3
    {0x55, 0x71, 0x10}, // 4
    {0x74, 0x71, 0x70}, // 5
    {0x74, 0x75, 0x70}, // 6
    {0x71, 0x11, 0x10}, // 7
    {0x75, 0x75, 0x70}, // 8
    {0x75, 0x71, 0x70}  // 9
};

// bitCount: 8
std::vector<std::vector<int>> bigNumbers = {
    {0x3e, 0x63, 0x73, 0x6b, 0x67, 0x63, 0x3e}, // 0
    {0x03, 0x07, 0x0f, 0x03, 0x03, 0x03, 0x03}, // 1
    {0x7e, 0x03, 0x03, 0x3e, 0x60, 0x63, 0x7f}, // 2
    {0x3e, 0x63, 0x03, 0x1f, 0x03, 0x63, 0x3e}, // 3
    {0x63, 0x63, 0x63, 0x3f, 0x03, 0x03, 0x03}, // 4
    {0x7f, 0x63, 0x60, 0x7e, 0x03, 0x63, 0x3e}, // 5
    {0x3e, 0x63, 0x60, 0x7e, 0x63, 0x63, 0x3e}, // 6
    {0x7f, 0x43, 0x07, 0x0c, 0x18, 0x18, 0x18}, // 7
    {0x3e, 0x63, 0x63, 0x3e, 0x63, 0x63, 0x3e}, // 8
    {0x3e, 0x63, 0x63, 0x3f, 0x03, 0x63, 0x3e}  // 9
};

std::vector<std::vector<int>> weatherIcons = {
    {0x03, 0x80, 0x06, 0x70, 0x1C, 0x18, 0x32, 0x06, 0x1F, 0xFC},                                     // cloudy
    {0x03, 0x80, 0x06, 0x70, 0x1C, 0x18, 0x30, 0x46, 0x1C, 0x9C, 0x01, 0xC0, 0x00, 0x80, 0x01, 0x00}, // thunderstorm
    {0x04, 0x20, 0x03, 0xc0, 0x0b, 0xd0, 0x03, 0xc0, 0x04, 0x20},                                     // clear
    {0x00, 0x38, 0x07, 0x7C, 0x0C, 0xFC, 0x38, 0x38, 0x62, 0x0C, 0x3F, 0xF8},                         // mostly or partly cloudy
    {0x03, 0x80, 0x06, 0x70, 0x1C, 0x18, 0x32, 0x06, 0x1F, 0xFC, 0x0A, 0x48, 0x0A, 0x48, 0x0A, 0x48}, // rain
    {0x03, 0x80, 0x06, 0x70, 0x1C, 0x18, 0x32, 0x06, 0x1F, 0xFC, 0x05, 0x20, 0x08, 0x48, 0x02, 0x20}, // snow
    {0x03, 0xFC, 0x3F, 0x00, 0x07, 0xFE, 0x7F, 0x00, 0x03, 0xF8, 0x3F, 0x80},                         // fog
};
