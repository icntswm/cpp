# include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &c) : Animal(c)
{
    type = c.type;
    std::cout << "Cat constructor called(copy)" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "I'm a cat" << std::endl;
}