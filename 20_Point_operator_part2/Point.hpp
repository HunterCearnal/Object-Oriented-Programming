#ifndef POINT_H
#define POINT_H
#include <string>

class Point {
public:
    Point(int x = 0, int y = 0, const char *tag = nullptr);
    ~Point();
    Point(const Point& other); //Copy constructor

    //Logic operator
    bool operator==(const Point& other) const;
    bool operator!=(const Point& other) const;

    //Arithmetic operator
    Point operator+(const Point& other) const;
    Point operator*(const Point& other) const; 

    //Arithmetic assignment operator
    Point& operator+=(const Point& other);
    Point& operator*=(const Point& other);

    int& operator[](int index);

    Point operator-();

    Point operator++(); //Preincriment
    Point operator++(int );

    std::string toString(void) const;

private:
    int x;
    int y;
    char *tag;
};

#endif