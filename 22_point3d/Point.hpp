#ifndef POINT_HPP
#define POINT_HPP

#include <string>

class Point {
public:
    Point(int x = 0, int y = 0, const char* tag = nullptr);
    Point(const Point& other);
    ~Point();

    bool operator==(const Point& other);
    bool operator!=(const Point& other);

    int& operator[](int index);
    
    Point operator++(int);

    std::string toString() const;

    void operator=(const Point& other);
    
    friend std::istream& operator>>(std::istream& in, const Point& p); // NOT IMPLEMENTED
protected:
    int x, y;
    char* tag;
};

std::ostream& operator<<(std::ostream& out, const Point& p);

#endif