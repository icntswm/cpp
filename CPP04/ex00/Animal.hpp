#ifndef ANIMAL_H
# define ANIMAL_H
# include <iostream>

class Animal
{
public:
    Animal();
    Animal(const Animal &a);
    virtual ~Animal();
    Animal& operator=(const Animal &a);
    virtual void makeSound() const;
    const std::string& getType() const;
protected:
    std::string type;
};

std::ostream& operator<<(std::ostream &o, const Animal &a);

#endif