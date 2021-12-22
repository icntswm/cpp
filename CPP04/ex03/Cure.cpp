#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure constructor called(default)" << std::endl;
}

Cure::Cure(const Cure &c) : AMateria("cure")
{
    std::cout << "Cure constructor called(copy)" << std::endl;
    *this = c;
}

Cure::~Cure()
{
    std::cout << "Cure desctructor called" << std::endl;
}

AMateria* Cure::clone() const
{
    AMateria *new_a;

    new_a = new Cure(*this);
    return(new_a);
}

Cure& Cure::operator=(const Cure &c)
{
    std::cout << "Cure assignment" << std::endl;
    this->type = c.type;
    return (*this);
}