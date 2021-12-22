#ifndef DOG_H
# define DOG_H
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
private:
    Brain *brain;
public:
    Dog();
    Dog(const Dog &d);
    ~Dog();
    Dog& operator=(const Dog &c);
    virtual void makeSound() const;
    virtual AAnimal& operator=(const AAnimal &a);
    virtual Brain* returnBrain() const;
};

#endif