#ifndef INTERN_H
# define INTERN_H
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
public:
    Intern();
    ~Intern();
    Form* makeForm(const std::string &formname, const std::string &target) const;
};

#endif