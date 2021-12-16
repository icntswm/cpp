#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap constructor called (default)" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap constructor called (name)" << std::endl;
}

FragTrap::FragTrap(FragTrap const &a) : ClapTrap(a)
{
    this->_name = a._name;
    this->_hitpoins = a._hitpoins;
    this->_energy_points = a._energy_points;
    this->_attack_damage = a._attack_damage;
    std::cout << "FragTrap constructor called (copy)" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

// void FragTrap::attack()
// {
//     if (this->_energy_points == 0)
//     {
//         std::cout << "FragTrap " << color(4) << this->_name << color(0) << " cannot attack because " <<
//         "he has run out of energy" << std::endl;
//     }
//     else
//     {
//         --this->_energy_points;
//         std::cout << "FragTrap " << color(4) << _name << color(0) << " deals " <<
//         color(2) << _attack_damage << color(0) << " damage to everyone around him. " <<
//         "He can attack " << color(2) << this->_energy_points << color (0) <<
//         " more times" << std::endl;
//     }
// }

void FragTrap::attack(std::string const &target)
{
    if (this->_energy_points == 0)
    {
        std::cout << "FragTrap " << color(4) << this->_name << color(0) << " cannot attack because " <<
        "he has run out of energy" << std::endl;
    }
    else
    {
        --this->_energy_points;
        std::cout << "FragTrap " << color(4) << this->_name << color(0) << " attack " <<
        color(3) << target << color(0) << ", causing " << color(2) << this->_attack_damage << color(0) <<
        " points of damage. " << "He can attack " << color(2) << this->_energy_points << color (0) <<
        " more times" << std::endl;
    }
}

void FragTrap::highFivesGuys()
{
    int five;
    std::cout << "FragTrap " << color(4) << this->_name << color(0) <<
    " asks for a high five. Enter \"5\": ";
    std::cin >> five;
    if (std::cin.fail() || five != 5)
        std::cout << "You're evil 🖕" << std::endl;
    else
        std::cout << "Thanks 👍" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const &a)
{
    std::cout << "FragTrap: The character " << color(4) << this->_name << color(0) <<
    " stole the brain of the character " << color(4) << a._name << color(0) << std::endl;
    this->_name = a._name;
    this->_hitpoins = a._hitpoins;
    this->_energy_points = a._energy_points;
    this->_attack_damage = a._attack_damage;
    return (*this);
}