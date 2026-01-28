#include <iostream>

void add_five(int& num) {
    num += 5;
}

int main() {
    int a = 10;

    int& a_ref = a;

    a += 10;
    a_ref *= 10;

    std::cout << a << " " << a_ref << std::endl;
    
    add_five(a_ref);
    
    std::cout << a << " " << a_ref << std::endl;
    
    return 0;
}