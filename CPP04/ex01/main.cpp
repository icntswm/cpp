#include "Cat.hpp"
#include "Dog.hpp"

void    make_ideas(Animal *animals[], int number)
{
    int i;
    Brain *brain;

    i = 0;
    while (i < number)
    {
        brain = animals[i]->getBrain();
        brain->ideas[0] = "I want to eat";
        brain->ideas[1] = "I'm thirsty";
        brain->ideas[2] = "I want to go for a walk";
        i++;
    }
    std::cout << animals[0]->getType() << "[0] : " << animals[0]->getBrain()->ideas[0] << std::endl;
    std::cout << animals[0]->getType() << "[0] : " << animals[0]->getBrain()->ideas[1] << std::endl;
    std::cout << animals[0]->getType() << "[0] : " << animals[0]->getBrain()->ideas[2] << std::endl;
    std::cout << "----------------------------" << std::endl;
    std::cout << animals[1]->getType() << "[1] : " << animals[1]->getBrain()->ideas[0] << std::endl;
    std::cout << animals[1]->getType() << "[1] : " << animals[1]->getBrain()->ideas[1] << std::endl;
    std::cout << animals[1]->getType() << "[1] : " << animals[1]->getBrain()->ideas[2] << std::endl;
    std::cout << "----------------------------" << std::endl;

    *animals[0] = *animals[1];
    brain = animals[0]->getBrain();
    brain->ideas[0] = "I don't want to eat anymore";
    brain->ideas[1] = "I don't want to drink anymore";
    brain->ideas[2] = "I don't want to walk anymore";

    std::cout << "----------------------------" << std::endl;
    std::cout << animals[0]->getType() << "[0] : " << animals[0]->getBrain()->ideas[0] << std::endl;
    std::cout << animals[0]->getType() << "[0] : " << animals[0]->getBrain()->ideas[1] << std::endl;
    std::cout << animals[0]->getType() << "[0] : " << animals[0]->getBrain()->ideas[2] << std::endl;
    std::cout << "----------------------------" << std::endl;
    std::cout << animals[1]->getType() << "[1] : " << animals[1]->getBrain()->ideas[0] << std::endl;
    std::cout << animals[1]->getType() << "[1] : " << animals[1]->getBrain()->ideas[1] << std::endl;
    std::cout << animals[1]->getType() << "[1] : " << animals[1]->getBrain()->ideas[2] << std::endl;
}

int main()
{
    int i;
    int number = 6;
    Animal* animals[number];

    i = 0;
    while (i < number)
    {
        if (i < number / 2)
            animals[i] = new Cat();
        else
            animals[i] = new Dog();
        i++;
    }
    std::cout << "----------------------------" << std::endl;
    make_ideas(animals, number);
    std::cout << "----------------------------" << std::endl;
    animals[2]->makeSound();
    animals[4]->makeSound();
    std::cout << "----------------------------" << std::endl;
    i = 0;
    while (i < number)
        delete animals[i++];
    return (0);
}