#include "ClapTrap.hpp"

std::string ClapTrap::color(int color)
{
    std::string colors[5] = {"\033[0m", "\033[31m", "\033[32m", "\033[33m", "\033[34m"};
    return (colors[color]);
}

ClapTrap::ClapTrap() : _name("Groot"), _hitpoins(100), _energy_points(50), _attack_damage(20)
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoins(100), _energy_points(50), _attack_damage(20)
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &a) : _name(a._name), _hitpoins(a._hitpoins),
_energy_points(a._energy_points), _attack_damage(a._attack_damage)
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(std::string const &target)
{
    if (this->_energy_points == 0)
    {
        std::cout << "ClapTrap " << color(4) << this->_name << color(0) << " cannot attack because " <<
        "he has run out of energy" << std::endl;
    }
    else
    {
        --this->_energy_points;
        std::cout << "ClapTrap " << color(4) << this->_name << color(0) << " attack " <<
        color(3) << target << color(0) << ", causing " << color(2) << this->_attack_damage << color(0) <<
        " points of damage. " << "He can attack " << color(2) << this->_energy_points << color (0) <<
        " more times" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount > INT_MAX)
        std::cout << color(1) << "ClapTrap: Invalid number. Use from 0 to INT_MAX" << color(0) << std::endl;
    else
    {
        if (amount > this->_hitpoins)
            this->_hitpoins = 0;
        else
            this->_hitpoins -= amount;
        std::cout << "ClapTrap " << color(4) << this->_name << color(0) << " took " <<
        color(2) << amount << color(0) << " damage. " << "His health is " <<
        color(2) << this->_hitpoins << color(0);
        if (this->_hitpoins == 0)
            std::cout << color(1) << ". He is dying. Treat it" << color(0);
        std::cout << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (amount > INT_MAX)
        std::cout << color(1) << "ClapTrap: Invalid number. Use from 0 to INT_MAX" << color(0) << std::endl;
    else
    {
        this->_hitpoins += amount;
        this->_energy_points += amount;
        std::cout << "ClapTrap " << color(4) << this->_name << color(0) << " replenished health and energy by " <<
        color(2) << amount << color(0) << ". His health - " << color(2) << this->_hitpoins << color(0) <<
        ", energy - " << color(2) << this->_energy_points << color(0) << std::endl;
    }
}

ClapTrap& ClapTrap::operator=(ClapTrap const &a)
{
    std::cout << "ClapTrap: The character " << color(4) << this->_name << color(0) <<
    " stole the brain of the character " << color(4) << a._name << color(0) << std::endl;
    this->_name = a._name;
    this->_hitpoins = a._hitpoins;
    this->_energy_points = a._energy_points;
    this->_attack_damage = a._attack_damage;
    return (*this);
}