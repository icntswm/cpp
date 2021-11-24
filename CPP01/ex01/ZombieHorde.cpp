#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie  *zombies = new Zombie[N];
    int i = 0;
    while (i < N)
    {
        if (i % 2 == 0)
            zombies[i].addNameZombies("Donald");
        else if (i % 3 == 0)
            zombies[i].addNameZombies("Dwayne");
        else if (i % 5 == 0)
            zombies[i].addNameZombies("Vitya");
        else if (i % 7 == 0)
            zombies[i].addNameZombies("Ruslik");
        else
            zombies[i].addNameZombies(name);
        i++;
    }
    return(zombies);
}