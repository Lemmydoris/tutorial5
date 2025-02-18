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
    TextArea* get(int index) const; //retriving a textarea by index
    TextArea* get(const std::string& id) const; //retriving a textarea by id
    TextArea* remove(const std::string& id); //removing text area by id
    TextArea* remove(int index);//removing text area by index
    int getSize() const; //return number of elements stored
    void print() const;//printing all textareas in the array
};

#endif