#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Groot_clap_name"), _name("Groot")
{
    this->_hitpoins = 100;
    this->_energy_points = 50;
    this->_attack_damage = 30;
    std::cout << "DiamondTrap constructor called (default)" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), _name(name)
{
    this->_hitpoins = 100;
    this->_energy_points = 50;
    this->_attack_damage = 30;
    std::cout << "DiamondTrap constructor called (name) " << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &a) : ClapTrap(a), ScavTrap(a), FragTrap(a), _name(a._name)
{
    this->_hitpoins = 100;
    this->_energy_points = 50;
    this->_attack_damage = 30;
    std::cout << "DiamondTrap constructor called (copy)" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::attack(std::string const &target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name: " << this->color(4) <<  this->_name << color(0) <<
    " | ClapTrap name: " << color(4) << ClapTrap::_name << color(0) << std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const &a)
{
    std::cout << "DiamondTrap: The character " << color(4) << this->_name << color(0) <<
    " stole the brain of the character " << color(4) << a._name << color(0) << std::endl;
    this->_name = a._name;
    this->_hitpoins = a._hitpoins;
    this->_energy_points = a._energy_points;
    this->_attack_damage = a._attack_damage;
    return (*this);
}