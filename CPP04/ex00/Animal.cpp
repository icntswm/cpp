# include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called(default)" << std::endl;
}

Animal::Animal(const Animal &a) : type(a.type)
{
    std::cout << "Animal constructor called(copy)" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

void    Animal::makeSound() const
{
    std::cout << "I'm an animal" << std::endl;
}

const std::string& Animal::getType() const
{
    return(type);
}

Animal& Animal::operator=(const Animal &a)
{
    type = a.type;
    return (*this);
}

std::ostream& operator<<(std::ostream &o, const Animal &a)
{
    o << a.getType();
    return (o);
}
