#ifndef ANIMAL_H
# define ANIMAL_H
# include <iostream>
# include "Brain.hpp"

class Animal
{
public:
    Animal();
    Animal(const Animal &a);
    virtual ~Animal();
    virtual Animal& operator=(const Animal &a);
    virtual void makeSound() const;
    virtual Brain* getBrain() const = 0;
    const std::string& getType() const;
protected:
    std::string type;
};

std::ostream& operator<<(std::ostream &o, const Animal &a);

#endif