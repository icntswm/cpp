#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap constructor called (default)" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    // _name = name;
    std::cout << "ScavTrap constructor called (name)" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &a) : ClapTrap(a)
{
    this->_name = a._name;
    this->_hitpoins = a._hitpoins;
    this->_energy_points = a._energy_points;
    this->_attack_damage = a._attack_damage;
    std::cout << "ScavTrap constructor called (copy)" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

// void ScavTrap::attack()
// {
//     if (this->_energy_points == 0)
//     {
//         std::cout << "ScavTrap " << color(4) << this->_name << color(0) << " cannot attack because " <<
//         "he has run out of energy" << std::endl;
//     }
//     else
//     {
//         --this->_energy_points;
//         std::cout << "ScavTrap " << color(4) << _name << color(0) << " deals " <<
//         color(2) << _attack_damage << color(0) << " damage to everyone around him. " <<
//         "He can attack " << color(2) << this->_energy_points << color (0) <<
//         " more times" << std::endl;
//     }
// }

void ScavTrap::attack(std::string const &target)
{
    if (this->_energy_points == 0)
    {
        std::cout << "ScavTrap " << color(4) << this->_name << color(0) << " cannot attack because " <<
        "he has run out of energy" << std::endl;
    }
    else
    {
        --this->_energy_points;
        std::cout << "ScavTrap " << color(4) << this->_name << color(0) << " attack " <<
        color(3) << target << color(0) << ", causing " << color(2) << this->_attack_damage << color(0) <<
        " points of damage. " << "He can attack " << color(2) << this->_energy_points << color (0) <<
        " more times" << std::endl;
    }
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << color(4) << this->_name << color(0) <<
    " is defending" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &a)
{
    std::cout << "ScavTrap: The character " << color(4) << this->_name << color(0) <<
    " stole the brain of the character " << color(4) << a._name << color(0) << std::endl;
    this->_name = a._name;
    this->_hitpoins = a._hitpoins;
    this->_energy_points = a._energy_points;
    this->_attack_damage = a._attack_damage;
    return (*this);
}