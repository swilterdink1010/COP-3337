#include <iostream>
#include "Point.hpp"
using namespace std;

int main() {
    Point p1(3, 4, "p1");
    Point p2(3, 4);
    Point p3(p1);

    p2 = p3;

    cout << p1;
    cout << p2.toString();
    cout << p3.toString();

    Point p4(1, 2, "p4");

    cin >> p4;

    return 0;
}