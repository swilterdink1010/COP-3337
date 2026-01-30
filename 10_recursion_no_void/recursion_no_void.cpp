#include <iostream>

int power(int base, int exp);

int main() {
    std::cout << power(2, 4) << std::endl;
    
    return 0;
}

int power(int base, int exp) {
    if (exp == 0) {
        return 1;
    }
    return base * power(base, exp - 1);
}