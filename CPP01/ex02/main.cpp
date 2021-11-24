#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "String (str): " << str << std::endl;
    std::cout << "Address (str): " << &str << std::endl;
    std::cout << "String (stringPTR): " << *stringPTR << std::endl;
    std::cout << "Address (stringPTR): " << stringPTR << std::endl;
    std::cout << "String (stringREF): " << stringREF << std::endl;
    std::cout << "Address (stringREF): " << &stringREF << std::endl;

    return (0);
}