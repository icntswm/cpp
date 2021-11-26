#ifndef HUMANA_H
# define HUMANA_H
# include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon      *weapon;
public:
    HumanA();
    HumanA(std::string nameHuman);
    HumanA(std::string name, Weapon &weap);
    ~HumanA();
    void attack(void);
};

#endif