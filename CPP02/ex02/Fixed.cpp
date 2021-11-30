#include "Fixed.hpp"

Fixed::Fixed() : m_fix_num(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f1) : m_fix_num(f1.m_fix_num)
{
//	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const float num)
{
	//std::cout << "Float constructor called" << std::endl;
	m_fix_num = 1024 * num;
}

Fixed::Fixed(int num)
{
//	std::cout << "Int constructor called " << std::endl;
//	m_fix_num = num;
	m_fix_num = 1024 * num;
}


Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (m_fix_num);
}

void Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called" << std::endl;
	m_fix_num = raw;
}

float Fixed::toFloat() const
{
	return (static_cast<float>(m_fix_num) / 1024);
}

int Fixed::toInt() const
{
	return (m_fix_num / 1024);
}

Fixed &Fixed::operator=(const Fixed &f1)
{
//	std::cout << "Assignation operator called" << std::endl;
	m_fix_num = f1.getRawBits();
	return (*this);
}

std::ostream& operator<<(std::ostream &o, Fixed const &f1)
{
	o << f1.toFloat();
	return (o);
}

bool Fixed::operator<(const Fixed &f1)
{
	return (this->m_fix_num < f1.m_fix_num);
}

bool Fixed::operator>(const Fixed &f1)
{
	return (this->m_fix_num > f1.m_fix_num);
}

bool Fixed::operator>=(const Fixed &f1)
{
	return (this->m_fix_num >= f1.m_fix_num);
}

bool Fixed::operator<=(const Fixed &f1)
{
	return (this->m_fix_num <= f1.m_fix_num);
}

bool Fixed::operator==(const Fixed &f1)
{
	return (this->m_fix_num == f1.m_fix_num);
}

bool Fixed::operator!=(const Fixed &f1)
{
	return (this->m_fix_num != f1.m_fix_num);
}

int	Fixed::operator+(int i1)
{
	return (this->m_fix_num + i1);
}

int Fixed::operator-(int i1)
{
	return (this->m_fix_num - i1);
}

int Fixed::operator*(int i1)
{
	return (this->m_fix_num * i1);
}

int Fixed::operator/(int i1)
{
	return (this->m_fix_num / i1);
}

Fixed Fixed::operator+(const Fixed &f1)
{
	return (Fixed(this->toFloat() + f1.toFloat()));
}

Fixed Fixed::operator-(const Fixed &f1)
{
	return (Fixed(this->toFloat() - f1.toFloat()));
}

Fixed Fixed::operator*(const Fixed &f1)
{
	return (Fixed(this->toFloat() * f1.toFloat()));
}

Fixed Fixed::operator/(const Fixed &f1)
{
	return (Fixed(this->toFloat() / f1.toFloat()));
}

Fixed &Fixed::operator++(void)
{
	this->m_fix_num += 4;
	return (*this);
}

Fixed &Fixed::operator--(void)
{
	this->m_fix_num -= 4;
	return (*this);
}

Fixed Fixed::operator++(int num)
{
	(void)num;
	Fixed save = *this;
	++*this;
	return (save);
}

Fixed Fixed::operator--(int num)
{
	(void)num;
	Fixed save = *this;
	--*this;
	return (save);
}

Fixed& Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1.m_fix_num > f2.m_fix_num)
		return (f2);
	return (f1);
}

Fixed const& Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1.m_fix_num > f2.m_fix_num)
		return (f2);
	return (f1);
}

Fixed& Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1.m_fix_num < f2.m_fix_num)
		return (f2);
	return (f1);
}

Fixed const& Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1.m_fix_num < f2.m_fix_num)
		return (f2);
	return (f1);
}