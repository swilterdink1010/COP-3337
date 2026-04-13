#include "Point3D.hpp"

Point3D::Point3D(int x, int y, int z, const char* tag) : Point(x, y, tag), z(z) {}

std::ostream& operator<<(std::ostream& out, const Point3D& p) {
    if (p.tag) {
        out << p.tag;
    }
    else {
        out << "Null";
    }
    out << ": (" << p.x << ", " << p.y << ", " << p.z << ")";
    return out;
}