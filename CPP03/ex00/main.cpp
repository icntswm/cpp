#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("WuZi");
    ClapTrap b;
    ClapTrap c = a;

    a.attack("CJ");
    b.attack("Rocket");
    a.takeDamage(5);
    a.beRepaired(14);
    b.takeDamage(15);
    a.takeDamage(-5);
    c = b;
    c.attack("Raider");
    return (0);
}