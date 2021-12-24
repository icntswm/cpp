# include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
    : Form("PresidentialPardonForm", 25, 5), _target("anonim")
{
    std::cout << "\033[34m" << _target << "\033[0m" << " | PresidentialPardonForm constructor called(deafult)" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
    : Form("PresidentialPardonForm", 25, 5), _target(target)
{
    std::cout << "\033[34m" << _target << "\033[0m" << " | PresidentialPardonForm constructor called(name)" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &pr)
    : Form("PresidentialPardonForm", 25, 5), _target(pr._target)
{
    std::cout << "\033[34m" << _target << "\033[0m" << " | PresidentialPardonForm constructor called(copy)" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "\033[34m" << _target << "\033[0m" << " | PresidentialPardonForm destructor called" << std::endl;
}

const std::string& PresidentialPardonForm::getTarget() const
{
    return(this->_target);
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &pr)
{
    (void)pr;
    return (*this);
}

void    PresidentialPardonForm::execute(Bureaucrat const &execute) const
{
    execute.executeForm(*this);
    if (this->getSigned() && execute.getGrade() < this->getGradeForExecute())
        std::cout << this->getTarget() << " was pardoned by Zafod Beeblebrox" << std::endl;
    else
        throw(Form::LoseExecute());
}