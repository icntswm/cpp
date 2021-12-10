#include "Point.hpp"

bool bsp(Point const first, Point const second, Point const third, Point const point);

int main()
{
	Point first(0, 5.5f);
	Point second(0, 0);
	Point third(3.1f, 1.1f);
	Point point(0.1f, 3); 

	// Point first(5.4f, 0.2f);
	// Point second(0, 0);
	// Point third(5.4f);
	// Point point(5.38f, 0.2f);

	// Point first(.4f, 2.f);
	// Point second(0, 0);
	// Point third(7.1f, 2);
	// Point point(0.5, 1.2f);

	// Point first(0);
	// Point second(0);
	// Point third(0);
	// Point point(0);
	
	std::cout << "The vertices of the triangle:" << std::endl; 
	std::cout << "xy(first): " << first << std::endl;
	std::cout << "xy(second): " << second << std::endl;
	std::cout << "xy(third): " << third << std::endl;
	std::cout << "\nxy(point): " << point << "\n" << std::endl;
	if (bsp(first, second, third, point))
		std::cout << "The point is inside the triangle - TRUE" << std::endl;
	else
		std::cout << "The point is outside the triangle - FALSE" << std::endl;
	return (0);
}
