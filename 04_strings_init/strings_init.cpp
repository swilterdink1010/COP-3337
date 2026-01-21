#include <iostream>
#include <string>

int main(void) {
    // Initialize the string
    std::string str1("first string");
    
    // Initialize a string with another string
    
    std::string str2(str1);
    
    // Initialize the string with character and number of occurrence

    std::string str3(100, '&');

    // Initialize a string with part of another string

    std::string str4(str1, 6, 5);

    std::cout << str4 << std::endl;
    std::cout << str3 << std::endl;

    if (str1 == str2) {
        std::cout << str4 + str1 << std::endl;
    }

    return 0;
}