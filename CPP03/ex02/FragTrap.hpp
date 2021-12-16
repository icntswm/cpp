#ifndef FRAGTRAP_H
# define FRAGTRAP_H
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap const &a);
    FragTrap& operator=(FragTrap const &a);
    ~FragTrap();
    void attack(std::string const &target);
    void highFivesGuys(void);
};


#endif