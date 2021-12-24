#ifndef FORM_H
# define FORM_H
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string _formName;
    bool _signed;
    const int _gradeForSigned;
    const int _gradeForExecute;
    static const int _hightGrade = 1;
    static const int _lowGrade = 150; 
public:
    Form();
    Form(const std::string &name, int gSigned, int gExecute);
    Form(const Form &f);
    ~Form();
    Form&   operator=(const Form &f);
    const   std::string& getFormName() const;
    bool    getSigned() const;
    int     getGradeForSigned() const;
    int     getGradeForExecute() const;
    void    beSigned(const Bureaucrat &b);
    virtual void execute (Bureaucrat const & executor) const = 0;
    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return ("Too high grade to sign/execute(maximum 1)");
            }
    };
    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return ("Grade too low to sign/execute(minimum 150)");
            }
    };
     class LoseExecute : public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return ("The form cannot be completed because it is \
either not signed or the bureaucrat has a low grade");
            }
    };
};

std::ostream& operator<<(std::ostream &o, const Form &f);

#endif