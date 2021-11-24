#include "Karen.hpp"

int main()
{
    Karen person;
    std::cout << "DEBUG -----" << std::endl;
    person.complain("debug");
    std::cout << "INFO -----" << std::endl;
    person.complain("info");
    std::cout << "WARNING -----" << std::endl;
    person.complain("warning");
    std::cout << "ERROR -----" << std::endl;
    person.complain("error");
    return(0);
}