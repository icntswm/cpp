#include "iter.hpp"

template <typename T>
void    printing(T value)
{
    std::cout << "Array stores values: " << value << std::endl;
}

int main()
{
    std::cout << "\033[34m" << "-----STRING ARRAY-----" << "\033[0m" << std::endl;
    std::string string_array[3] = {"one", "two", "three"};
    ::iter(string_array, 3, printing);

    std::cout << "\033[34m" << "-----INT ARRAY-----" << "\033[0m" << std::endl;
    int int_array[3] = {1, 2, 3};
    ::iter(int_array, 3, printing);

    std::cout << "\033[34m" << "-----CHAR ARRAY-----" << "\033[0m" << std::endl;
    char char_array[3] = {'a', 'b', 'c'};
    ::iter(char_array, 3, printing);

    std::cout << "\033[34m" << "-----FLOAT ARRAY-----" << "\033[0m" << std::endl;
    float float_array[3] = {1.1f, 2.2f, -5.3f};
    ::iter(float_array, 3, printing);

    std::cout << "\033[34m" << "-----DOUBLE ARRAY-----" << "\033[0m" << std::endl;
    double double_array[3] = {5.5, -2.1, 11.11};
    ::iter(double_array, 3, printing);

    return (0);
}