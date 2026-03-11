#include "MyVector.h"

int main() {
    MyVector* v1 = new MyVector(5);

    for (int i = 2; i * i < 100; i++) {
        v1->push_back(i * i);
    }
    v1->print();
    
    v1->at(2) = 67;
    v1->print();

    // v1->at(-1); 

    return 0;
}