#include "TextArea.h"
#include <iostream>

//constructor initializing the member variables
TextArea::TextArea(std::string id, std::string text, int x, int y, int w, int h, RGB f, RGB b) 
    : id(id), text(text), x(x), y(y), width(w), height(h), fill(f), border(b) {}

// constructor for minimal initialization
TextArea::TextArea(std::string id, std::string text) : id(id), text(text), x(0), y(0), width(50), height(20), fill(RGB::WHITE()), border(RGB::BLACK()) {}
//print
void TextArea::print() const {
    std::cout << "TextArea id: " << id << "\n" << "location: " << x << ", " << y << "\n" << "Size: " << width << "x" << height << "\n" << "Text: " << text << std::endl;
}

//getter
const std::string& TextArea::getId() const {
    return id;
}
