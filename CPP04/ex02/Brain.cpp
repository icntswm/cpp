#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "\033[33m" << "Brain " << "\033[0m" << "constructor called(default)" << std::endl;
}

Brain::Brain(const Brain &b)
{
    std::cout << "\033[33m" << "Brain " << "\033[0m" << "constructor called(copy)" << std::endl;
    *this = b;
}

Brain::~Brain()
{
    std::cout << "\033[33m" << "Brain " << "\033[0m" << "destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain &b)
{
    std::cout << "Brain assignment" << std::endl;
    int i;

    i = 0;
    while (i < 100)
    {
        this->ideas[i] = b.ideas[i];
        i++;
    }
	return (*this);
}
