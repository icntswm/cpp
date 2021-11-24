#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H
# include <iostream>

class Zombie
{
private:
    static int  nbZombies;
    int         index;
    std::string z_name;
public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    int     getNbZombies(void);
    void    addNameZombies(std::string name);
    void    announce(void);
};

Zombie  *newZombie(std::string name);
Zombie* zombieHorde(int N, std::string name);

#endif