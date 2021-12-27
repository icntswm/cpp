#include "Data.hpp"

uintptr_t serialize (Data *ptr)
{
    uintptr_t num;

    num = reinterpret_cast<uintptr_t>(ptr);
    return (num);
}

Data * deserialize (uintptr_t raw)
{
    Data *data;

    data = reinterpret_cast<Data *>(raw);
    return(data);
}

int main()
{
    Data *data = new Data;
    Data *new_data;
    uintptr_t num;

    data->str = "Wuzi";
    data->number = 123;
    num = serialize(data);
    new_data = deserialize(num);
    std::cout << "\033[33m" << "---DATA---\n" << "\033[0m" << "string: " << data->str <<
    "\nnumber: " << data->number << std::endl;
    std::cout << "\033[33m" << "---NEW DATA---\n" << "\033[0m" << "string: " << new_data->str <<
    "\nnumber: " << new_data->number << std::endl;
    if (data)
        delete data;
    return (0);
}