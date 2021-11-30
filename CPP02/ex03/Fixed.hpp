#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

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
	bool operator>(const Fixed &f1);
	bool operator<(const Fixed &f1);
	bool operator>=(const Fixed &f1);
	bool operator<=(const Fixed &f1);
	bool operator==(const Fixed &f1);
	bool operator!=(const Fixed &f1);
	Fixed operator+(const Fixed &f1);
	Fixed operator-(const Fixed &f1);
	Fixed operator*(const Fixed &f1);
	Fixed operator/(const Fixed &f1);
	int operator+(int i1);
	int operator-(int i1);
	int operator*(int i1);
	int operator/(int i1);
	Fixed &operator++(void);
	Fixed &operator--(void);
	Fixed operator++(int num);
	Fixed operator--(int num);
	static Fixed &min(Fixed &f1, Fixed &f2);
	static const Fixed &min(const Fixed &f1, const Fixed &f2);
	static Fixed &max(Fixed &f1, Fixed &f2);
	static const Fixed &max(const Fixed &f1, const Fixed &f2);
	int	getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream& operator<<(std::ostream &o, Fixed const &f1);

#endif