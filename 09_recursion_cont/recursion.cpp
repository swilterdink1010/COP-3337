#include <iostream>

void print_digits(unsigned n);
    
int main() {
    print_digits(12345);
    
    return 0;
}

void print_digits(unsigned n) {
    if (n <= 0) {
        return;
    }
    print_digits(n / 10);
    std::cout << n % 10 << std::endl;
}