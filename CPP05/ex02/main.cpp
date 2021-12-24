# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

int main()
{   
    //min grade - 150, max grade - 1

    try
    {
        ShrubberyCreationForm shr("hohoho");

        Bureaucrat joe("joe", 1);

        std::cout << joe << std::endl;
        // shr.execute(joe);
        shr.beSigned(joe);
        shr.execute(joe);

        // Bureaucrat mike("mike", 150);

        // std::cout << mike << std::endl;
        // shr.execute(mike);

    }
    catch(const std::exception& e)
    {
        std::cerr << "\033[31m" << e.what() << "\033[0m" << '\n';
    }

    std::cout << "-----------------------------------------" << std::endl;

    try
    {
        RobotomyRequestForm rb("robot");

        Bureaucrat bob("bob", 100);

        rb.beSigned(bob);

        bob.plusGrade(60);
        std::cout << bob << std::endl;
        rb.beSigned(bob);
        rb.execute(bob);
    }
    catch(const std::exception& e)
    {
        std::cerr << "\033[31m" << e.what() << "\033[0m" << '\n';
    }
    
    std::cout << "-----------------------------------------" << std::endl;

    try
    {
        PresidentialPardonForm pr("president");

        Bureaucrat dilan("dilan", 2);
        Bureaucrat zack("zack", 43);

        pr.beSigned(zack);
        zack.plusGrade(40);
        pr.beSigned(zack);
        zack.minusGrade(15);
        pr.execute(zack);
        pr.execute(dilan);
    }
    catch(const std::exception& e)
    {
        std::cerr << "\033[31m" << e.what() << "\033[0m" << '\n';
    }
   
    return (0);
}