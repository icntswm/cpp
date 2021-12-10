#include "Point.hpp"

Point::Point() : x(0), y(0)
{
    // std::cout << "Point default constructor called" << std::endl;
}

Point::Point(float x1) : x(x1), y(0)
{
    // std::cout << "Point float1 constructor called" << std::endl;
}

Point::~Point()
{
    // std::cout << "Point destructor called" << std::endl;
}

Point::Point(const float x1, const float y1) : x(x1), y(y1)
{
    // std::cout << "Point float2 constructor called" << std::endl;
}

Point::Point(const Point &p1) : x(p1.x), y(p1.y)
{
	// std::cout << "Copy constructor called" << std::endl;
}

float Point::returnFixed(int num) const
{
    if (num == 120)
        return (this->x.toFloat());
    return (this->y.toFloat());
}

std::ostream &operator<<(std::ostream &o, Point const &p1)
{
    o << p1.returnFixed('x') << " " << p1.returnFixed('y');
    return (o);
}