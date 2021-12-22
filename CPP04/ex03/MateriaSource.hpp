#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria *src[4];
public:
    MateriaSource();
    MateriaSource(const MateriaSource &ms);
    ~MateriaSource();
    MateriaSource& operator=(const MateriaSource &ms);
    void learnMateria(AMateria *amat);
    AMateria* createMateria(std::string const & type);
};

#endif