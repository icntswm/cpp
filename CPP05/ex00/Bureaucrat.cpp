# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Anonim"), _grade(75)
{
    std::cout << "Bureaucrat constructor called(default)" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &b)
{
    std::cout << "Bureaucrat constructor called(copy)" << std::endl;
    *this = b;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade)
{
    if (this->_grade < this->_hightGrade)
        throw (Bureaucrat::GradeTooHighException());
    else if (this->_grade > this->_lowGrade)
        throw (Bureaucrat::GradeTooLowException());
    std::cout << "\033[32m" << _name << "\033[0m" << " | Bureaucrat constructor called(name)" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "\033[32m" << _name << "\033[0m" << " | Bureaucrat destructor called" << std::endl;
}

const std::string& Bureaucrat::getName() const
{
    return(this->_name);
}

int Bureaucrat::getGrade() const
{
    return(this->_grade);
}

void Bureaucrat::plusGrade(int plGr)
{
    this->_grade -= plGr;
    std::cout << "plusGrade for " << "\033[33m" << _name << "\033[0m" << " called";
    if (this->_grade < this->_hightGrade)
        throw (Bureaucrat::GradeTooHighException());
    else
        std::cout << ". His grade: " << "\033[34m" << this->getGrade() << "\033[0m" << std::endl;
}

void Bureaucrat::minusGrade(int msGr)
{
    this->_grade += msGr;
    std::cout << "minusGrade for " << "\033[33m" << _name << "\033[0m" << " called";
    if (this->_grade > this->_lowGrade)
        throw (Bureaucrat::GradeTooLowException());
    else
        std::cout << ". His grade: " << "\033[34m" << this->getGrade() << "\033[0m" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &b)
{
    this->_name = b.getName();
    this->_grade = b.getGrade();
    return (*this);
}

std::ostream& operator<<(std::ostream &o, const Bureaucrat &b)
{
    o << b.getName() << " | "<< b.getGrade();
    return (o);
}