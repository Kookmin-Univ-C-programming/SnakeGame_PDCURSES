#ifndef _POINT_
#define _POINT_

#include "GameField.h"
#include <iostream>

class Point
{
public:
    int x;
    int y;
    Point() :x(0), y(0) { };
    Point(int x, int y) :x(x), y(y) { };

    Point moveTo(const int dir);
    bool isValid(GameField& gf);
    
    friend bool operator==(const Point& x, const Point& y);
    Point& operator=(const Point& a);
    
    Point& operator+= (const Point& a);
    Point& operator-= (const Point& a);
    friend Point operator+ (Point p1, const Point& p2);
    friend Point operator- (Point p1, const Point& p2);

    friend std::ostream& operator<<(std::ostream& outStream, const Point& point);
};

bool operator==(const Point& x, const Point& y);
Point operator+ (Point p1, const Point& p2);
Point operator- (Point p1, const Point& p2);

std::ostream& operator<<(std::ostream& outStream, const Point& point);

#endif
