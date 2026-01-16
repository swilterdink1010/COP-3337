/*
    Introduction to namespaces
*/

#include <iostream>

//Create the namespace
namespace first {
    int a = 67;
}
namespace second {
    int a = 41;
}

int main(void) {
    std::cout << first::a << std::endl;
    std::cout << second::a << std::endl;
    
    return 0;
}