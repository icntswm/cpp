#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Inter constructor called(default)" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Intern destructor called" << std::endl;
}

Form* Intern::makeForm(const std::string &formname, const std::string &target) const
{
    std::string forms[3] = {"shrubbery", "robotomy", "president"};
    Form *form[4] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target), NULL};
    int i = 0;
    Form *save = NULL;

    while (i < 3 && formname != forms[i])
        i++;
    try
    {
        save = form[i];
        if (!save)
            throw("Error! Required form not found");
        else
        {
            std::cout << "Intern created " << save->getFormName() << std::endl;
            int j = 0;
            while (j < 4)
            {
                if (j == i)
                    j++;
                delete form[j++];
            }
        }
    }
    catch(const char *err)
    {
        int j = 0;
        while (j < 4)
            delete form[j++];
        std::cerr << "\033[31m" << err << "\033[0m" << '\n';
    }  
    return (save);
}