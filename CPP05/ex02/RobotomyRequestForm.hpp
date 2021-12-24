#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H
# include "Form.hpp"
# include <cstdlib>

class RobotomyRequestForm : public Form
{
private:
    const std::string _target;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(const std::string &target);
    RobotomyRequestForm(const RobotomyRequestForm &rb);
    ~RobotomyRequestForm();
    RobotomyRequestForm& operator=(const RobotomyRequestForm &rb);
    const std::string& getTarget() const;
    void    execute(Bureaucrat const &executor) const;
};

#endif