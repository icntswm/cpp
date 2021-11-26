#include "Karen.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Error: wrong number of arguments" << std::endl;
        return (1);
    }
    Karen person;
    person.complain(argv[1]);
    return(0);
}