#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H
# include <iostream>

class WrongAnimal
{
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &a);
    ~WrongAnimal();
    WrongAnimal& operator=(const WrongAnimal &a);
    void makeSound() const;
    const std::string& getType() const;
protected:
    std::string type;
};

std::ostream& operator<<(std::ostream &o, const WrongAnimal &a);

#endif