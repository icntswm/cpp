#ifndef CAT_H
# define CAT_H
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
private:
    Brain *brain;
public:
    Cat();
    Cat(const Cat &c);
    ~Cat();
    Cat& operator=(const Cat &c);
    virtual void makeSound() const;
    virtual AAnimal& operator=(const AAnimal &a);
    virtual Brain* returnBrain() const;
};

#endif