#include "easyfind.hpp"

int main()
{
    std::list<int> list;
    std::list<int>::const_iterator iterator_list;
    std::vector<int> vector;
    std::vector<int>::const_iterator iterator_vector;

    int i = 0;
    while (i < 20)
    {
        vector.push_back(i);
        list.push_back(i * 2);
        i++;
    }
    iterator_list = list.begin();
    std::cout << "LIST: ";
    while (iterator_list != list.end())
    {
        std::cout << *iterator_list << " | ";
        ++iterator_list;
    }
    std::cout << std::endl;
    iterator_vector = vector.begin();
    std::cout << "VECTOR: ";
    while (iterator_vector != vector.end())
    {
        std::cout << *iterator_vector << " | ";
        ++iterator_vector;
    }
    std::cout << std::endl;
    try
    {
        std::list<int>::const_iterator res_l = easyfind(list, 20);
        std::cout << "\033[32m" << "List result: " << "\033[0m" << *res_l << std::endl;
        std::vector<int>::const_iterator res_v = easyfind(vector, 17);
        std::cout << "\033[32m" << "Vector result: " << "\033[0m" << *res_v << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "\033[31m" << e.what() << "\033[0m" << '\n';
    }
    return(0);
}