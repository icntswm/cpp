#include "Fixed.hpp"

int	twoInPow(int num)
{
	int i = 0;
	int res = 2;
	while (i <= num)
	{
		res <<= 1;
		i++;
	}
	return (res);
}

Fixed::Fixed() : m_fix_num(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f1) : m_fix_num(f1.m_fix_num)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	m_fix_num = twoInPow(this->m_bit) * num;
}

Fixed::Fixed(int num)
{
	std::cout << "Int constructor called" << std::endl;
	m_fix_num = twoInPow(this->m_bit) * num;
}

Fixed &Fixed::operator=(const Fixed &f1)
{
	std::cout << "Assignation operator called" << std::endl;
	m_fix_num = f1.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (m_fix_num);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	m_fix_num = raw;
}

float Fixed::toFloat() const
{
	return (static_cast<float>(m_fix_num) / twoInPow(this->m_bit));
}

int Fixed::toInt() const
{
	return (m_fix_num / twoInPow(this->m_bit));
}

std::ostream& operator<<(std::ostream &o, Fixed const &f1)
{
	o << f1.toFloat();
	return (o);
}