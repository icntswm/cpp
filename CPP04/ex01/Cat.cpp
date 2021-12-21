# include "Cat.hpp"

Cat::Cat()
{
    std::cout << "\033[35m" << "Cat " << "\033[0m" << "constructor called(default)" << std::endl;
    type = "Cat";
    brain = new Brain();
}

Cat::Cat(const Cat &c) : Animal(c)
{
    std::cout << "\033[35m" << "Cat " << "\033[0m" << "constructor called(copy)" << std::endl;
    *this = c;
}

Cat::~Cat()
{
    if (brain)
        delete brain;
    std::cout << "\033[35m" << "Cat " << "\033[0m" << "destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "I'm a cat" << std::endl;
}

Brain* Cat::getBrain() const
{
    return(brain);
}

Cat		&Cat::operator=(const Cat &c)
{
    std::cout << "Cat assignment" << std::endl;
	this->type = c.getType();
	*this->brain = *c.getBrain();
	return (*this);
}

Animal	&Cat::operator=(const Animal &a)
{
    std::cout << "Animal assignment" << std::endl;
	this->type = a.getType();
	*this->brain = *a.getBrain();
	return (*this);
}