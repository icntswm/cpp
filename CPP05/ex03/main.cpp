# include "Intern.hpp"

int main()
{   

    Intern someRandomIntern;
    Bureaucrat mike("mike", 2);
    Form *rrf;

    rrf = someRandomIntern.makeForm("robotomt", "lol");
    if (rrf)
        delete rrf;
    rrf = someRandomIntern.makeForm("shrubbery", "new_year");
    try
    {
        rrf->beSigned(mike);
        rrf->execute(mike);
    }
    catch(const std::exception& e)
    {
        std::cerr << "\033[31m" << e.what() << "\033[0m" << '\n';
    }
    if (rrf)
        delete rrf;
    return (0);
}