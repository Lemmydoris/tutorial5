
#include "RGB.h"
#include <iostream>

//constructor for initializing RGB values
RGB::RGB(int r, int g, int b) : red(r), green(g), blue(b) {}

//printing RGB values
void RGB::print() const {
    std::cout << "RGB(" << red << ", " << green << ", " << blue << ")" << std::endl;
}

//static functions
RGB RGB::WHITE() { return RGB(255, 255, 255); }
RGB RGB::BLACK() { return RGB(0, 0, 0); }
RGB RGB::RED() { return RGB(255, 0, 0); }
RGB RGB::GREEN() { return RGB(0, 255, 0); }
RGB RGB::BLUE() { return RGB(0, 0, 255); }
