#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource constructor called(default)" << std::endl;
    int i;

    i = 0;
    while (i < 4)
    {
        this->src[i] = NULL;
        i++;
    }
}

MateriaSource::MateriaSource(const MateriaSource &ms)
{
    std::cout << "MateriaSource constructor called(copy)" << std::endl;
    int i;

    i = 0;
    while (i < 4)
    {
        this->src[i] = NULL;
        i++;
    }
    *this = ms;
}

MateriaSource::~MateriaSource()
{
    int i;

    i = 0;
    while (i < 4)
    {
        if (this->src[i])
            delete src[i];
        i++;
    }
    std::cout << "MateriaSource destructor called" << std::endl;
}

void    MateriaSource::learnMateria(AMateria *amat)
{
    std::cout << "\033[36m" << "LearnMateria called" << "\033[0m" << std::endl;
    int i;
    i = 0;
    while (i < 4)
    {
        if (src[i])
            i++;
        else
        {
            src[i] = amat;
            break ;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
    std::cout << "\033[34m" << "CreateMateria called" << "\033[0m" << std::endl;
    int i;

    i = 0;
    while (i < 4)
    {
        if (src[i]->getType() == type)
            return (src[i]);
        i++;
    }
    return (0);
}

MateriaSource& MateriaSource::operator=(const MateriaSource &ms)
{
    std::cout << "MaterialSource assignment" << std::endl;
    int i;

    i = 0;
    while (i < 4)
    {
        if (src[i])
            delete src[i];
        src[i] = ms.src[i];
        i++;
    }
    return(*this);
}