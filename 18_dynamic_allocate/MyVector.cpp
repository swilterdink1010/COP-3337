#include "MyVector.h"
#include <iostream>
using namespace std;

MyVector::MyVector(int capacity) {
    size = 0;
    this->capacity = capacity;

    elements = new int[capacity];
}
MyVector::~MyVector() {
    delete [] elements;
}

void MyVector::push_back(int val) {
    if (size == capacity) {
        allocateMemory(capacity * 2);
    }
    elements[size] = val;
    size++;
}
int MyVector::pop_back() {
    if (!empty()) {
        return elements[--size];
        if (size < capacity / 2) {
            allocateMemory(capacity / 2);
        }
    }
    throw "Out of bounds";
}
int& MyVector::at(int index) {
    if (index > -1 && index < size) {
        return elements[index];
    }
    throw "Out of bounds";
}
int MyVector::thirdMax() const {

}

int MyVector::getCapacity() const {
    return capacity;
}

void MyVector::print() {
    cout << "[";
    for (int i = 0; i < size; i++) {
        cout << " " << elements[i];
    }
    cout << " ]" << endl;
}

void MyVector::allocateMemory(int memory_size) {
    int* old_elements = elements;
    elements = new int[memory_size];
    for (int i = 0; i < size; i++) {
        elements[i] = old_elements[i];
    }
    capacity = memory_size;
    delete [] old_elements;
}
bool MyVector::empty() {
    return size == 0;
}