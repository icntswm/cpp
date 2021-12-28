#ifndef EASYFIND_H
# define EASYFIND_H
# include <iostream>
# include <list>
# include <vector>
# include <algorithm>

template <typename T>
typename T::const_iterator easyfind(T &cont, int const num)
{
    typename T::const_iterator res = find(cont.begin(), cont.end(), num);

    if (res != cont.end())
        return (res);
    throw(std::invalid_argument("Error: no such item found"));
}

#endif