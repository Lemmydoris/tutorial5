
#include "TAArray.h"
#include <iostream>

//constructor that initializes a dynamic allocated array with a given capacity
TAArray::TAArray(int cap) : size(0), capacity(cap) {
    arr = new TextArea*[capacity];//allocating memory for the textarea
}

//destructor to delete the dynamic allocated textareas and frees 
TAArray::~TAArray() {
    for (int i = 0; i < size; ++i) {
        delete arr[i];//freeing textarea object
    }      
    delete[] arr;//freeing the array
}

//adding Textarea pointer to the array incase there is space
bool TAArray::add(TextArea* ta) {
    if (size >= capacity) return false;//if array is full return false
    arr[size++] = ta;//adding a new textarea and increase the size
    return true;
}

//inserting a textarea pointer at a specific index if it is valid
bool TAArray::add(TextArea* ta, int index) {
    if (size >= capacity || index < 0 || index > size) return false;//checking of bounds
    for (int i = size; i > index; --i) {
        arr[i] = arr[i - 1];//right shifting elements
    }    
    arr[index] = ta;//insert a new textarea at a given index
    ++size;
    return true;
}

//print
void TAArray::print() const {
    for (int i = 0; i < size; ++i) arr[i]->print();
}
