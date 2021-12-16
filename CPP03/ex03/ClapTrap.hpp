#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>
# include <climits>
# include <stdlib.h>

class ClapTrap
{
public:
    ClapTrap();
    ClapTrap(std::string name);
	ClapTrap(ClapTrap const &a);
    virtual ~ClapTrap();
	ClapTrap& operator=(ClapTrap const &a);
    virtual void attack(std::string const &target);
    virtual void takeDamage(unsigned int amount);
    virtual void beRepaired(unsigned int amount);
    std::string color(int color);
protected:
    std::string		_name;
    unsigned int	_hitpoins;
    unsigned int	_energy_points;
    unsigned int	_attack_damage;
};

#endif