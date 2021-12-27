#ifndef ITER_H
# define ITER_H
# include <iostream>

template <typename T>
void    iter(T *adress, int lenght, void(*function)(T))
{
    int i;

    i = 0;
    while (i < lenght)
        function(adress[i++]);
    // while (i < lenght)
    //     std::cout << "return: " << function(adress[i++]) << std::endl;
}

#endif