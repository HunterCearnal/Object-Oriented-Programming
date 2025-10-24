#include "Point.hpp"
#include <cstring>

Point::Point(int x, int y, const char *tag) {
    this->x = x;
    this->y = y;
    if (tag) {
        int size = strlen(tag);
        this->tag = new char[size + 1];
        strcpy(this->tag, tag);
    } else {
        this->tag = nullptr;
    }
}

Point::~Point() {
    if (tag) {
        delete [] tag;
    }
}

Point::Point(const Point& other) {
    x = other.x;
    y = other.y;
    if (other.tag) {
        int size = strlen(other.tag);
        this->tag = new char[size + 1];
        strcpy(this->tag, other.tag);
    } else {
        tag = nullptr;
    }
}

bool Point::operator==(const Point& other) const {
    return (x == other.x && y == other.y);
}

bool Point::operator!=(const Point& other) const {
    return !(*this == other);
}

//Arithmetic Operator
Point Point::operator+(const Point& other) const {
    return Point(x + other.x, y + other.y);
}

Point Point::operator*(const Point& other) const {
    return Point(x * other.x, y * other.y);
}

//Arithmetic Assignment Operator
Point& Point::operator+=(const Point& other) {
    x += other.x;
    y += other.y;
    return *this;
}

Point& Point::operator*=(const Point& other) {
    x *= other.x;
    y *= other.y;
    return *this;
}

int& Point::operator[](int index) {
    return (index == 0) ? x : y;
}

std::string Point::toString(void) const {
    return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
}

Point Point::operator-() {
    return Point(-x, -y);
}

//Preincrement
Point Point::operator++() {
    x += 1;
    y += 1;
    return *this;
}

//Postincrement
Point Point::operator++(int ) {
    Point temp(*this); //Point temp(x, y);
    this->x += 1;
    this->y += 1;
    return temp; 
}