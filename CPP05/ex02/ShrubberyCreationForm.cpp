#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
    : Form("ShrubberyCreationForm", 145, 137), _target("anonim")
{
    std::cout << "\033[34m" << _target << "\033[0m" << " | ShrubberyCreationForm constructor called(default)" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
    : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
    std::cout << "\033[34m" << _target << "\033[0m" << " | ShrubberyCreationForm constructor called(name)" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &sh) :
    Form("ShrubberyCreationForm", 145, 137), _target(sh._target)
{
    std::cout << "\033[34m" << _target << "\033[0m" << " | ShrubberyCreationForm constructor called(copy)" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "\033[34m" << _target << "\033[0m" << " | ShrubberyCreationForm destructor called" << std::endl;   
}

const std::string& ShrubberyCreationForm::getTarget() const
{
    return(this->_target);
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &sh)
{
    (void)sh;
    return(*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &execute) const
{
    execute.executeForm(*this);
    if (this->getSigned() && execute.getGrade() < this->getGradeForExecute())
    {
        std::string file = this->getTarget() + "_shrubbery";
        std::ofstream out;
        const char *file_n = file.c_str();

        out.open(file_n);

        if (out.is_open())
        {
            out << "              /\\" << std::endl;
            out << "             <  >" << std::endl;
            out << "              \\/" << std::endl;
            out << "              /\\" << std::endl;
            out << "             /  \\" << std::endl;
            out << "            /++++\\" << std::endl;
            out << "           /  ()  \\" << std::endl;
            out << "           /      \\" << std::endl;
            out << "          /~`~`~`~`\\" << std::endl;
            out << "         /  ()  ()  \\" << std::endl;
            out << "         /          \\" << std::endl;
            out << "        /*&*&*&*&*&*&\\" << std::endl;
            out << "       /  ()  ()  ()  \\" << std::endl;
            out << "       /              \\" << std::endl;
            out << "      /++++++++++++++++\\" << std::endl;
            out << "     /  ()  ()  ()  ()  \\" << std::endl;
            out << "     /                  \\" << std::endl;
            out << "    /~`~`~`~`~`~`~`~`~`~`\\" << std::endl;
            out << "   /  ()  ()  ()  ()  ()  \\" << std::endl;
            out << "   /*&*&*&*&*&*&*&*&*&*&*&\\" << std::endl;
            out << "  /                        \\" << std::endl;
            out << " /,.,.,.,.,.,.,.,.,.,.,.,.,.\\" << std::endl;
            out << "             |   |" << std::endl;
            out << "            |`````|" << std::endl;
            out << "            \\_____/ " << std::endl;
        }
        out.close();
    }
    else
        throw(Form::LoseExecute());
}