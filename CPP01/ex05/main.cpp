#include "Karen.hpp"

int main()
{
    Karen person;
    std::cout << "-----debug-----" << std::endl;
    person.complain("debug");
    std::cout << "-----info-----" << std::endl;
    person.complain("info");
    std::cout << "-----warning-----" << std::endl;
    person.complain("warning");
    std::cout << "-----error-----" << std::endl;
    person.complain("error");
    return(0);
}