# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal constructor called(default)" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &a) : type(a.type)
{
    std::cout << "WrongAnimal constructor called(copy)" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

void    WrongAnimal::makeSound() const
{
    std::cout << "I'm an WrongAnimal" << std::endl;
}

const std::string& WrongAnimal::getType() const
{
    return(type);
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &a)
{
    type = a.type;
    return (*this);
}

std::ostream& operator<<(std::ostream &o, const WrongAnimal &a)
{
    o << a.getType();
    return (o);
}