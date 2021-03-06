#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    //Animal
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << "-----------------------------" << std::endl; 

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    std::cout << "-----------------------------" << std::endl; 
    
    //WrongAnimal
    const WrongAnimal* wrCat = new WrongCat();
    std::cout << "-----------------------------" << std::endl; 

    std::cout << wrCat->getType() << " " << std::endl;
    wrCat->makeSound();

    std::cout << "-----------------------------" << std::endl;
    //free Animal
    delete i;
    delete j;
    delete meta;
    std::cout << "-----------------------------" << std::endl; 
    //free WrongAnimal
    delete wrCat;

    return (0);
}