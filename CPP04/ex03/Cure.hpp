#ifndef CURE_H
# define CURE_H
# include "AMateria.hpp"

class Cure : public AMateria
{
private:
    /* data */
public:
    Cure();
    Cure(const Cure &c);
    ~Cure();
    Cure& operator=(const Cure &c);
    AMateria* clone() const;
};

#endif