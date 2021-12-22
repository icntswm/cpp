#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "\033[36m" << "Dog " << "\033[0m" << "constructor called(default)" << std::endl;
    type = "Dog";
    brain = new Brain();
}

Dog::Dog(const Dog &d) : AAnimal(d)
{
    std::cout << "\033[36m" << "Dog " << "\033[0m" << "constructor called(copy)" << std::endl;
    *this = d;
}

Dog::~Dog()
{
    if (brain)
        delete brain;
    std::cout << "\033[36m" << "Dog " << "\033[0m" << "destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "I'm a dog" << std::endl;
}

Brain* Dog::returnBrain() const
{
    return(brain);
}

Dog		&Dog::operator=(const Dog &d)
{
    std::cout << "Dog assignment" << std::endl;
	this->type = d.getType();
	*this->brain = *d.returnBrain();
	return (*this);
}

AAnimal	&Dog::operator=(const AAnimal &a)
{
    std::cout << "AAnimal assignment" << std::endl;
	this->type = a.getType();
	*this->brain = *a.returnBrain();
	return (*this);
}