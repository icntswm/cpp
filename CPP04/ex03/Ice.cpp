#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice constructor called(default)" << std::endl;
}

Ice::Ice(const Ice &i) : AMateria("ice")
{
    std::cout << "Ice constructor called(copy)" << std::endl;
    *this = i;
}

Ice::~Ice()
{
    std::cout << "Ice desctructor called" << std::endl;
}

AMateria* Ice::clone() const
{
    AMateria *new_a;

    new_a = new Ice(*this);
    return(new_a);
}

Ice& Ice::operator=(const Ice &i)
{
    std::cout << "Ice assignment" << std::endl;
    this->type = i.type;
    return (*this);
}