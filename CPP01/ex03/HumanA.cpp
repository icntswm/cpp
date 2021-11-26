#include "HumanA.hpp"

HumanA::HumanA(std::string nameHuman) : name(nameHuman)
{
}

HumanA::HumanA(std::string nameHuman, Weapon &weap) 
    : name(nameHuman), weapon(&weap)
{
}

HumanA::~HumanA()
{
}

void    HumanA::attack(void)
{
    std::cout << name << " attacks with his " << this->weapon->getType() << std::endl;
}