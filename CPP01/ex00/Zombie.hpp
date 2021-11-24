#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H
# include <iostream>

class Zombie
{
private:
    std::string z_name;
public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    void    announce(void);
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

#endif