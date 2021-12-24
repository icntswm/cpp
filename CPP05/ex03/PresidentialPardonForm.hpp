#ifndef PRESIDENTALPARDONFORM_H
# define PRESIDENTALPARDONFORM_H
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    const std::string _target;
public:
    PresidentialPardonForm();
    PresidentialPardonForm(const std::string &target);
    PresidentialPardonForm(const PresidentialPardonForm &pr);
    virtual ~PresidentialPardonForm();
    PresidentialPardonForm& operator=(const PresidentialPardonForm &pr);
    const std::string& getTarget() const;
    void execute(Bureaucrat const &executor) const;
};

#endif