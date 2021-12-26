#include "Convert.hpp"

int main(int argc, char **argv)
{
    Convert conv;

    try
    {
        if (argc != 2)
            throw(Convert::errorCharacter());
        std::string toString = static_cast<std::string>(argv[1]);
        conv.handlingString(toString);
        conv.convertation(toString);
        conv.printConvert();
    }
    catch(const std::exception& e)
    {
        std::cerr << "\033[31m" << e.what() << "\033[0m" << '\n';
    }

    return (0);
}