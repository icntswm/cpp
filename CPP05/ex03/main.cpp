# include "Intern.hpp"

int main()
{   

    Intern someRandomIntern;
    Bureaucrat mike("mike", 2);
    Form *rrf;

    rrf = someRandomIntern.makeForm("qwerty", "tree");
    if (rrf)
        delete rrf;
    rrf = someRandomIntern.makeForm("shrubbery", "new_year");
    try
    {
        rrf->beSigned(mike);
        rrf->execute(mike);
        if (rrf)
            delete rrf;
        std::cout << "----------------------------" << std::endl;
        rrf = someRandomIntern.makeForm("president", "Billy");
        rrf->beSigned(mike);
        mike.minusGrade(100);
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