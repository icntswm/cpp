#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{
private:
	int m_fix_num;
	static const int m_bit = 8;
public:
	Fixed();
	Fixed(int num);
	Fixed(const float number);
	Fixed(const Fixed &f1);
	~Fixed();
	Fixed &operator=(const Fixed &f1);
	int	getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream& operator<<(std::ostream &o, Fixed const &f1);

#endif