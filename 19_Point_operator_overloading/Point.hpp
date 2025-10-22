#ifndef POINT_H
#define POINT_H

class Point {
public:
    Point(int x = 0, int y = 0);

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

private:
    int x;
    int y;
};

#endif