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
    ~ClapTrap();
	ClapTrap& operator=(ClapTrap const &a);
    void attack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string color(int color);
protected:
    std::string		_name;
    unsigned int	_hitpoins;
    unsigned int	_energy_points;
    unsigned int	_attack_damage;
};

#endif