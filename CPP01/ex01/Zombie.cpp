#include "Zombie.hpp"

int Zombie::nbZombies = 0;

Zombie::Zombie() : index(nbZombies)
{
    ++this->nbZombies;
}

int Zombie::getNbZombies(void)
{
    return (this->nbZombies);
}

Zombie::Zombie(std::string name) : z_name(name)
{
    this->index = this->getNbZombies();
    this->announce();
    ++this->nbZombies;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->z_name << "(" << this->index << ")" << "is died" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << "<" << this->z_name << "(" << this->index << ")> " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::addNameZombies(std::string name)
{
    this->z_name = name;
    this->announce();
}
