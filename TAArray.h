#ifndef TAARRAY_H
#define TAARRAY_H

#include "TextArea.h"

class TAArray {
private:
    TextArea** arr;//dynamic array of textarea pointer
    int size;//current no of elements in array
    int capacity;//max capacity of the array

public:
    TAArray(int cap = 10);//constructor to initialize the array
    ~TAArray();//destructor to clean up the dynamic array

    bool add(TextArea* ta);//adding a textarea to the array
    bool add(TextArea* ta, int index);//inserting a textarea at the secific index
    void print() const;//printing all textareas in the array
};

#endif