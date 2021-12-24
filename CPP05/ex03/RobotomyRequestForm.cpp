# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
    : Form("RobotomyRequestForm", 72, 45), _target("anonim")
{
    // std::cout << "\033[34m" << _target << "\033[0m" << " | RobotomyRequestForm constructor called(deafult)" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
    : Form("RobotomyRequestForm", 72, 45), _target(target)
{
    // std::cout << "\033[34m" << _target << "\033[0m" << " | RobotomyRequestForm constructor called(name)" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rb)
    : Form("RobotomyRequestForm", 72, 45), _target(rb._target)
{
    // std::cout << "\033[34m" << _target << "\033[0m" << " | RobotomyRequestForm constructor called(copy)" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    // std::cout << "\033[34m" << _target << "\033[0m" << " | RobotomyRequestForm destructor called" << std::endl;
}

const std::string& RobotomyRequestForm::getTarget() const
{
    return(this->_target);
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &rb)
{
    (void)rb;
    return(*this);
}

void    RobotomyRequestForm::execute(Bureaucrat const &execute) const
{
    execute.executeForm(*this);
    if (this->getSigned() && execute.getGrade() < this->getGradeForExecute())
    {
        std::cout << "Bbbrrrrrr...Bbrrrr..." << std::endl;
        srand(time(0));
        if (rand() % 2)
        {
            std::cout << this->getTarget() << " was successfully robotic" << std::endl;
        }
        else
            std::cout << this->getTarget() << " was not successfully robotic" << std::endl;
    }
    else
        throw(Form::LoseExecute());
}