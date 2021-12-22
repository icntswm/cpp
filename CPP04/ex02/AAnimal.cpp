# include "AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "\033[31m" << "Animal " << "\033[0m" << "constructor called(default)" << std::endl;
}

AAnimal::AAnimal(const AAnimal &a)
{
    std::cout << "\033[31m" << "Animal " << "\033[0m" << "constructor called(copy)" << std::endl;
    *this = a;
}

AAnimal::~AAnimal()
{
    std::cout << "\033[31m" << "Animal " << "\033[0m" << "destructor called" << std::endl;
}

// void    AAnimal::makeSound() const
// {
//     std::cout << "I'm an animal" << std::endl;
// }

const std::string& AAnimal::getType() const
{
    return(type);
}

// AAnimal& AAnimal::operator=(const AAnimal &a)
// {
//     std::cout << "Animal assignment" << std::endl;
//     type = a.getType();
//     return (*this);
// }

std::ostream& operator<<(std::ostream &o, const AAnimal &a)
{
    o << a.getType();
    return (o);
}
