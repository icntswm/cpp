#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string _name;
public:
    DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(DiamondTrap const &a);
    ~DiamondTrap();
    DiamondTrap& operator=(DiamondTrap const &a);
    void attack(std::string const &target);
    void whoAmI(void);
};


#endif