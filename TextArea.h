#ifndef TEXTAREA_H
#define TEXTAREA_H

#include <string>
#include "RGB.h"
#include "defs.h"

class TextArea {
private:
    std::string id;//unique identifier for the TextArea
    std::string text;//text being displayed inside the textarea
    int x, y, width, height;//size and position of textarea
    RGB fill, border;//fill and border colors

public:
//constructor initializing the member variables
    TextArea(std::string id, std::string text, int x, int y, int w, int h, RGB f = RGB::WHITE(), RGB b = RGB::BLACK());
    TextArea(std::string id, std::string text);
    TextArea(Rectangle rect, std::string id, std::string text);

    void print() const;//print functions
    //getter
    const std::string& getId() const;
};

#endif