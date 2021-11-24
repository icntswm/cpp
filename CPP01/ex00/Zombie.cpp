#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name) : z_name(name)
{
    this->announce();
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->z_name << " is died" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << "<" << this->z_name << "> " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
