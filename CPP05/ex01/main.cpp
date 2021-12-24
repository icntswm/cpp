#include "Form.hpp"

int main()
{   
    //min grade - 150, max grade - 1
    
    try
    {
        Form form("form", 83, 1);
        Bureaucrat joe("joe", 135);

        std::cout << joe << std::endl;
        form.beSigned(joe);
        std::cout << form << std::endl;
        joe.plusGrade(80);
        std::cout << joe << std::endl;
        form.beSigned(joe);
        std::cout << form << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "\033[31m" << e.what() << "\033[0m" << '\n';
    }

    std::cout << "-----------------------------------------" << std::endl;

    try
    {
        Form form("FORM#123", 4, 1);
        Form form1(form);
        Form form2("Form2", 5, 134);
        Bureaucrat mike("mike", 1);

        form2.beSigned(mike);

        std::cout << form << std::endl;
        std::cout << form1 << std::endl;
        std::cout << form2 << std::endl;
        form1 = form2;
        std::cout << form << std::endl;
        std::cout << form1 << std::endl;
        std::cout << form2 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "\033[31m" << e.what() << "\033[0m" << '\n';
    }
    
    return (0);
}