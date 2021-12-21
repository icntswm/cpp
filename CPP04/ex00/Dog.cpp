#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog constructor called(default)" << std::endl;
}

Dog::Dog(const Dog &d) : Animal(d)
{
    type = d.type;
    std::cout << "Dog constructor called(copy)" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "I'm a dog" << std::endl;
}