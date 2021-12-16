#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap a("Jim");
    DiamondTrap b("Mike");
    DiamondTrap c = a;
    
    a.attack("Bob");
    b.attack("Bob");
    c.attack("Bob");

    c.beRepaired(5);
    
    a.takeDamage(9);
    b.takeDamage(14);
    
    b.highFivesGuys();
    
    c = b;
    c.guardGate();

    b.whoAmI();
    a.whoAmI();
    c.whoAmI();

    a.takeDamage(-1);
    
    return (0);
}