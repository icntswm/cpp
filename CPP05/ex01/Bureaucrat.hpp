#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H
# include <iostream>

class  Bureaucrat
{
private:
    std::string _name;
    int _grade;
    static const int _hightGrade = 1;
    static const int _lowGrade = 150;
public:
    Bureaucrat();
    Bureaucrat(const Bureaucrat &b);
    Bureaucrat(const std::string &name, int grade);
    ~Bureaucrat();
    Bureaucrat& operator=(const Bureaucrat &b);
    const   std::string& getName() const;
    int     getGrade() const;
    void    plusGrade(int plGr);
    void    minusGrade(int mnGr);
    void    signForm(bool sign, const std::string &form) const;
    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return("Error: Too high grade (maximum 1)");
            }
    };
    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return("Error: Grade too low (minimum 150)");
            }
    };
};

std::ostream& operator<<(std::ostream &o, const Bureaucrat &b);

#endif