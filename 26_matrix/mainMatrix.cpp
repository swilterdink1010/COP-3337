#include "Matrix.hpp"
#include <string>

int main() {
    // std::cout << "Enter rows and columns: ";
    
    // int r, c;
    // std::cin >> r >> c;
    
    // try {
    //     Matrix<int>(r, c).print();
    // }
    // catch (const std::logic_error& ex) {
    //     std::cout << ex.what() << std::endl;
    // }

    try {
        Matrix<int>::load("input.txt").print();
    }
    catch (const std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }

    return 0;
}