#ifndef RGB_H
#define RGB_H

class RGB {
private:
    int red, green, blue;//member variables for RGB values

public:
    RGB(int r = 0, int g = 0, int b = 0);//initializing constructor for RGB values

    void print() const;//print function of RGB

    //static functions
    static RGB WHITE();
    static RGB BLACK();
    static RGB RED();
    static RGB GREEN();
    static RGB BLUE();
};

#endif