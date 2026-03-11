#ifndef MYVECTOR_H
#define MYVECTOR_H

class MyVector {
public:
    MyVector(int capacity);
    ~MyVector();

    void push_back(int val);
    int pop_back();
    int& at(int index);
    int thirdMax() const;

    int getCapacity() const;

    void print();
private:
    int* elements;
    int size;
    int capacity;

    void allocateMemory(int memory_size);
    bool empty();
};

#endif