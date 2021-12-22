#ifndef AANIMAL_H
# define AANIMAL_H
# include <iostream>
# include "Brain.hpp"

class AAnimal
{
public:
    AAnimal();
    AAnimal(const AAnimal &a);
    virtual ~AAnimal();
    virtual AAnimal& operator=(const AAnimal &a) = 0;
    virtual void makeSound() const = 0;
    virtual Brain* returnBrain() const = 0;
    const std::string& getType() const;
protected:
    std::string type;
};

std::ostream& operator<<(std::ostream &o, const AAnimal &a);

#endif