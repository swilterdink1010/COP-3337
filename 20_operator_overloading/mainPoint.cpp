#include <iostream>
#include "Point.hpp"
using namespace std;

int main() {
    Point p1(3, 4);
    Point p2(5, 4);
    Point p3(50, 70);

    if (p1 != p2) {
        cout << (char) p3[0];
    }
    else {
        cout << (char) p3[1];
    }

    p1[0] = 52;
    cout << (char) p1[0];

    cout << "Y5B" << endl;

    return 0;
}