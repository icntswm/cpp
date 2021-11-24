#include "Zombie.hpp"

int main()
{
    int num;
    
    std::cout << "Enter the number: ";
    std::cin >> num;
    if (std::cin.fail() || num <= 0)
    {
        std::cout << "Error: input error" << std::endl;
        return (1);
    }
    Zombie  *zombie = zombieHorde(num, "Mike");
    delete[] zombie;
    return (0);
}