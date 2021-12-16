#include "ScavTrap.hpp"

int main()
{
    ScavTrap a;
    ScavTrap b = a;
    ScavTrap c("Zizu");

    a.attack("Tom");

    a.takeDamage(90);
    a.takeDamage(10);
    a.beRepaired(1);
    a.guardGate();
    a = c;
    a.takeDamage(3);
    return (0);
}