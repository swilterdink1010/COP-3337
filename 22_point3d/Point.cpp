#include "Point.hpp"

#include <cstring>
#include <iostream>
using namespace std;

Point::Point(int x, int y, const char* new_tag) : x(x), y(y) {
    if (new_tag) {
        int size = strlen(new_tag);
        tag = new char[size+1];
        strcpy(tag, new_tag);
    }
    else {
        tag = nullptr;
    }
}

Point::Point(const Point& other) {
    x = other.x;
    y = other.y;
    if (other.tag) {
        int size = strlen(other.tag);
        tag = new char[size + 1];
        strcpy(tag, other.tag);
    }
    else {
        tag = nullptr;
    }
}

Point::~Point() {
    delete[] tag;
}

bool Point::operator==(const Point& other) {
    return (x == other.x && y == other.y);
}
bool Point::operator!=(const Point& other) {
    return !(*this == other);
}

Point Point::operator++(int) {
    Point temp(*this);
    this->x++;
    this->y++;
    return temp;
}

int& Point::operator[](int index) {
    return (index == 0 ? x : y);
}

void Point::operator=(const Point& other) {
    x = other.x;
    y = other.y;
    if (tag) {
        delete[] tag;
    }
    if (other.tag) {
        int size = strlen(other.tag);
        tag = new char[size + 1];
        strcpy(tag, other.tag);
    }
    else {
        tag = nullptr;
    }
}

string Point::toString() const {
    string s;
    if (tag) {
        s += string(tag);
    }
    return s + ": (" + to_string(x) + ", " + to_string(y) + ")\n";
}

ostream& operator<<(ostream& out, const Point& p) {
    out << p.toString();
    return out;
}

// istream& operator>>(istream& in, const Point& p) {
//     cout << "Enter x and y: ";
//     in >> p.x >> p.y;
//     return in;
// }