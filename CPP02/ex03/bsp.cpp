#include "Point.hpp"

bool bsp(Point const first, Point const second, Point const third, Point const point)
{
	float alpha = ((second.returnFixed('y') - third.returnFixed('y')) * (point.returnFixed('x') - third.returnFixed('x')) +\
		(third.returnFixed('x') - second.returnFixed('x')) * (point.returnFixed('y') - third.returnFixed('y'))) /
		((second.returnFixed('y') - third.returnFixed('y')) * (first.returnFixed('x') - third.returnFixed('x')) +\
		(third.returnFixed('x') - second.returnFixed('x')) * (first.returnFixed('y') - third.returnFixed('y')));
	float beta = ((third.returnFixed('y') - first.returnFixed('y')) * (point.returnFixed('x') - third.returnFixed('x')) +\
		(first.returnFixed('x') - third.returnFixed('x')) * (point.returnFixed('y') - third.returnFixed('y'))) /
		((second.returnFixed('y') - third.returnFixed('y')) * (first.returnFixed('x') - third.returnFixed('x')) +\
		(third.returnFixed('x') - second.returnFixed('x')) * (first.returnFixed('y') - third.returnFixed('y')));
	float gamma = 1.0f - alpha - beta;
	return (alpha > 0 && beta > 0 && gamma > 0);
}