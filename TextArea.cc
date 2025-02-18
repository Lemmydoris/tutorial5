#include "TextArea.h"
#include <iostream>

//constructor initializing the member variables
TextArea::TextArea(std::string id, std::string text, int x, int y, int w, int h, RGB f, RGB b) 
    : id(id), text(text), x(x), y(y), width(w), height(h), fill(f), border(b) {}

//print
void TextArea::print() const {
    std::cout << "TextArea id: " << id << "\n" << "location: " << x << ", " << y << "\n" << "Size: " << width << "x" << height << "\n" << "Text: " << text << std::endl;
}

//getter
const std::string& TextArea::getId() const {
    return id;
}
