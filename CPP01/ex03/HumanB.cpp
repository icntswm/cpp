#include "HumanB.hpp"

HumanB::HumanB(std::string nameHuman) : name(nameHuman) 
{
}

HumanB::HumanB(std::string nameHuman, Weapon &gun)
    :   name(nameHuman), weapon(&gun)
{
}

HumanB::~HumanB()
{
}

void    HumanB::setWeapon(Weapon &weap)
{
    weapon = &weap;
}

void    HumanB::attack(void)
{
    std::cout << name << " attacks with his " << this->weapon->getType() << std::endl;
}