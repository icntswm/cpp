#include "Point.hpp"

bool bsp(Point const first, Point const second, Point const third, Point const point);

int main( void )
{
	Point first(5.4f);
	Point second(0, 5);
	Point third(5, 0);
	Point point(5.4f, 0.1f); 
	
	std::cout << "The vertices of the triangle:" << std::endl; 
	std::cout << "xy(first): " << first << std::endl;
	std::cout << "xy(second): " << second << std::endl;
	std::cout << "xy(third): " << third << std::endl;
	std::cout << "\nxy(point): " << point << "\n" << std::endl;
	if (bsp(first, second, third, point))
		std::cout << "The point is inside the triangle - TRUE" << std::endl;
	else
		std::cout << "The point is outside the triangle - FALSE" << std::endl;
	return 0;
}