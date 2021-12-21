# include "Animal.hpp"

Animal::Animal()
{
    std::cout << "\033[31m" << "Animal " << "\033[0m" << "constructor called(default)" << std::endl;
}

Animal::Animal(const Animal &a)
{
    std::cout << "\033[31m" << "Animal " << "\033[0m" << "constructor called(copy)" << std::endl;
    *this = a;
}

Animal::~Animal()
{
    std::cout << "\033[31m" << "Animal " << "\033[0m" << "destructor called" << std::endl;
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
    std::cout << "Animal assignment" << std::endl;
    type = a.getType();
    return (*this);
}

std::ostream& operator<<(std::ostream &o, const Animal &a)
{
    o << a.getType();
    return (o);
}
