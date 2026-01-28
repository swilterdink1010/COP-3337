#include <iostream>

void countdown(int n);

int main() {
    countdown(100);

    return 0;
}

void countdown(int n) {
    if (n < 1) {
        return;
    }
    std::cout << n << " ";
    countdown(n - 1);
}