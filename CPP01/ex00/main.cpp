#include "Zombie.hpp"

int main()
{
    Zombie *zombie1 = newZombie("Mike");
    randomChump("Zack");

    delete zombie1;
    return (0);
}