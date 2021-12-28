#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H
# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack<T>()
    {
        std::cout << "MutantStack constructor called(default)" << std::endl;
    }
    MutantStack<T>(const MutantStack<T> &ms)
    {
        std::cout << "MutantStack constructor called(copy)" << std::endl;
    }
    ~MutantStack<T>()
    {
        std::cout << "MutantStack destructor called" << std::endl;
    }
    typedef typename std::stack<T>::container_type::const_iterator iterator;
    iterator begin()
    {
        return(this->c.begin());
    }
    iterator end()
    {
        return(this->c.end());
    }
    MutantStack<T>& operator=(const MutantStack<T> &ms)
    {
        std::cout << "Assignation called" << std::endl;
        (void)ms;
        return(*this); 
    }
};

#endif