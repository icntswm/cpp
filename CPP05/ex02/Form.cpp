# include "Form.hpp"

Form::Form() : _formName("AnonimForm"), _signed(false), _gradeForSigned(35), _gradeForExecute(55)
{
    std::cout << "\033[34m" << _formName << "\033[0m" << " | form constructor called(default)" << std::endl;
}

Form::Form(const std::string &name, int gSigned, int gExecute) : _formName(name), _signed(false), _gradeForSigned(gSigned), _gradeForExecute(gExecute)
{
    if (gSigned < this->_hightGrade || gExecute < this->_hightGrade)
        throw(Form::GradeTooHighException());
    else if (gSigned > this->_lowGrade || gExecute > this->_lowGrade)
        throw(Form::GradeTooLowException());
    std::cout << "\033[34m" << _formName << "\033[0m" << " | form constructor called(name)" << std::endl;
}

Form::Form(const Form &f) : _formName(f._formName), _gradeForSigned(f._gradeForSigned), _gradeForExecute(f._gradeForExecute)
{
    std::cout << "\033[34m" << _formName << "\033[0m" << " | form constructor called(copy)" << std::endl;
    *this = f;
}

Form::~Form()
{
    std::cout << "\033[34m" << _formName << "\033[0m" << " | form destructor called" << std::endl;
}

Form& Form::operator=(const Form &f)
{
    this->_signed = f.getSigned();
    return (*this);
}

const std::string& Form::getFormName() const
{
    return (this->_formName);
}

int Form::getGradeForSigned() const
{
    return (this->_gradeForSigned);
}

int Form::getGradeForExecute() const
{
    return (this->_gradeForExecute);
}

bool Form::getSigned() const
{
    return (this->_signed);
}

void    Form::beSigned(const Bureaucrat &b)
{
    if (b.getGrade() <= this->getGradeForSigned())
    {
        this->_signed = true;
        b.signForm(true, this->getFormName());
    }
    else
    {
        this->_signed = false;
        b.signForm(false, this->getFormName());
    }
}

std::ostream& operator<<(std::ostream &o, const Form &f)
{
    std::string sign;
    std::string color;

    sign = "not signed";
    color = "\033[31m";
    if (f.getSigned())
    {
        color = "\033[32m";
        sign = "signed";
    }
    o << "\033[35m" << "----FORM INFO----\n" << "\033[0m" << f.getFormName() << " " <<
    color << sign << "\033[0m" <<
    "\nGrade for form signing: " << f.getGradeForSigned() <<
    "\nGrade for form executing: " << f.getGradeForExecute() <<
    "\n-----------------" << std::endl;
    return (o);
}