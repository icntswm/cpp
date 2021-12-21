#ifndef CAT_H
# define CAT_H
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain *brain;
public:
    Cat();
    Cat(const Cat &c);
    ~Cat();
    Cat& operator=(const Cat &c);
    virtual void makeSound() const;
    virtual Animal& operator=(const Animal &a);
    virtual Brain* getBrain() const;
};

#endif