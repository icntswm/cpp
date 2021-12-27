#ifndef ARRAY_H
# define ARRAY_H
# include <iostream>
# include <stdlib.h>

template <typename T>
class Array
{
private:
    int _size;
    T   *_array;
public:
    Array<T>() : _size(0), _array(NULL)
    {
        std::cout << "Array constructor called(default)" << std::endl;
    }
    Array<T>(unsigned int n) : _size(n)
    {
        std::cout << "Array constructor called(uint)" << std::endl;
        if (n < 0)
            throw(std::invalid_argument("Error: number less than zero"));
        _array = new T[_size];
    }
    Array<T>(const Array<T> &ar) : _size(0)
    {
        std::cout << "Array constructor called(copy)" << std::endl;
        *this = ar;
    }
    ~Array<T>()
    {
        std::cout << "Array destructor called" << std::endl;
        delete [] _array;
    }
    Array<T>& operator=(const Array<T> &ar)
    {
        std::cout << "Assignation called" << std::endl;
        if (this->_size)
            delete [] this->_array;
        if (ar._size)
        {
            this->_size = ar._size;
            int i = 0;
            this->_array = new T[this->_size];
            while (i < ar._size)
            {
                this->_array[i] = ar._array[i];
                i++;
            }
        }
        else
        {
            this->_size = 0;
            this->_array = NULL;
        }
        return (*this);
    }
    T& operator[](const int i) const
    {
        if (i < 0 || i >= _size)
             throw(std::invalid_argument("Error: the requested item does not exist"));
        return(_array[i]);
    }
    int size() const
    {
        return(this->_size);
    }
};

#endif