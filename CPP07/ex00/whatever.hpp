#ifndef WHATEVER_H
# define WHATEVER_H
# include <iostream>

template <typename T>
void swap(T &a, T &b)
{
    T c;

    c = a;
    a = b;
    b = c;
}

template <typename T>
T min(const T a, const T b)
{
    if (a < b)
        return(a);
    return(b);
}

template <typename T>
T max(T a, T b)
{
    if (a > b)
        return(a);
    return(b);
}

#endif