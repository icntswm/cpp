#include "Weapon.hpp"

Weapon::Weapon() : weapon("katana with pony keychain")
{
}

Weapon::Weapon(std::string gun) : weapon(gun)
{
}

Weapon::~Weapon()
{
}

const std::string &Weapon::getType(void)
{
    return (this->weapon);
}

void Weapon::setType(std::string gun)
{
    this->weapon = gun;
}