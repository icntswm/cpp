#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const &a);
    ScavTrap& operator=(ScavTrap const &a);
    ~ScavTrap();
    void attack(std::string const &target);
    void guardGate(void);
};

#endif