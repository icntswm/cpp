#ifndef HUMANB_H
# define HUMANB_H
# include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon      *weapon;
public:
    HumanB();
    HumanB(std::string nameHuman);
    HumanB(std::string nameHuman, Weapon &gun);
    ~HumanB();
    void attack(void);
    void setWeapon(Weapon &weap);
};

#endif