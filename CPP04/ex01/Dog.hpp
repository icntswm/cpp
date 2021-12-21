#ifndef DOG_H
# define DOG_H
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain *brain;
public:
    Dog();
    Dog(const Dog &d);
    ~Dog();
    Dog& operator=(const Dog &c);
    virtual void makeSound() const;
    virtual Animal& operator=(const Animal &a);
    virtual Brain* getBrain() const;
};

#endif