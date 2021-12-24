#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H
# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
private:
    const std::string _target;
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const std::string &target);
    ShrubberyCreationForm(const ShrubberyCreationForm &sh);
    virtual ~ShrubberyCreationForm();
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm &sh);
    const std::string& getTarget() const;
    void execute(Bureaucrat const &executor) const;
};

#endif