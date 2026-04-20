#include <iostream>
using namespace std;

class Dad {
public:
    Dad() {
        cout << "Dad's constructor" << endl;
    }
    virtual ~Dad() {
        cout << "Dad's destructor" << endl;
    }
};

class Son : public Dad {
public:
    Son() {
        cout << "Son's constructor" << endl;
        data = new int[100];
        cout << "Allocated dynamic memory" << endl;
    }
    
    ~Son() override {
        cout << "Son's destructor" << endl;
        delete[] data;
        cout << "Deallocated dynamic memory" << endl;
    }

    int* data;
};

void tester(Son& s) {}

int main() {
    Dad* dad = new Son();

    // tester(*dad);
    tester(*static_cast<Son*>(dad));

    return 0;
}