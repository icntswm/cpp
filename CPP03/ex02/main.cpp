#include "FragTrap.hpp"

int main()
{
    FragTrap a;
    FragTrap b = a;
    FragTrap c("Mike");

    a.attack("Tom");
    b.attack("Bob");

    a.takeDamage(90);
    a.highFivesGuys();
    
    c.beRepaired(2);
    b.beRepaired(-4);
    c = b;
    c.highFivesGuys();
    return (0);
}