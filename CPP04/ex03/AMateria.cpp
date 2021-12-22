# include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
    // std::cout << "AMateria constructor called(name)" << std::endl;
    this->type = type;
}

AMateria::~AMateria()
{
    // std::cout << "AMateria destructor called" << std::endl;
}

std::string const & AMateria::getType() const
{
    return(type);
}

void AMateria::use(ICharacter& target)
{
    if (type == "ice")
        std::cout << "\033[33m" << "* shoots an ice bolt at "
    << target.getName() << " *" << "\033[0m" << std::endl;
    else if (type == "cure")
        std::cout << "\033[33m" << "* heals " << target.getName()
    << " wounds *" << "\033[0m" << std::endl;
}
