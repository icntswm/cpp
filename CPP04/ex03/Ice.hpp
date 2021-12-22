#ifndef ICE_H
# define ICE_H
# include "AMateria.hpp"

class Ice : public AMateria
{
private:
    /* data */
public:
    Ice();
    Ice(const Ice &i);
    ~Ice();
    Ice& operator=(const Ice &i);
    AMateria* clone() const;
};

#endif