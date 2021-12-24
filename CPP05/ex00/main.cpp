#include "Bureaucrat.hpp"

int main()
{   
    //min grade - 150, max grade - 1
    
    try
    {
        Bureaucrat mike("Mike", 75);

        std::cout << mike << std::endl;
        mike.plusGrade(5);
        std::cout << mike << std::endl;
        mike.plusGrade(69);
        std::cout << mike << std::endl;
        mike.plusGrade(1);
        std::cout << mike << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "\033[31m" << e.what() << "\033[0m" << '\n';
    }
    std::cout << "-----------------------------------------" << std::endl;
    try
    {
        Bureaucrat bob("Bob", 150);

        std::cout << bob << std::endl;
        bob.minusGrade(1);
        std::cout << bob << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "\033[31m" << e.what() << "\033[0m" << '\n';
    }
    
    return (0);
}