#ifndef POINT_H
# define POINT_H
# include "Fixed.hpp"

class Point
{
private:
    Fixed const x;
    Fixed const y;
public:
    Point();
    Point(float x1);
    Point(const Point &p1);
    Point(const float x1, const float y1);
    float returnFixed(int fix) const;
    ~Point();
};

std::ostream &operator<<(std::ostream &o, Point const &p1);

#endif