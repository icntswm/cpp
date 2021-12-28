#include "span.hpp"

Span::Span() : _N(0)
{
    // std::cout << "Span constructor called(default)" << std::endl;
}

Span::Span(unsigned int n) : _N(n), _array(0)
{
    if (n > INT_MAX)
        throw(std::invalid_argument("Error: wrong array size"));
    // std::cout << "Span constructor called(uint)" << std::endl;
}

Span::Span(const Span &s)
{
    // std::cout << "Span constructor called(copy)" << std::endl;
    *this = s;
}

Span::~Span()
{
    // std::cout << "Span destructor called" << std::endl;
}

void Span::addNumber(long number)
{
    if (number > INT_MAX || number < INT_MIN)
        throw(std::invalid_argument("Error: number greater INT_MAX or less INT_MIN"));
    if (_array.size() == _N)
        throw(std::invalid_argument("Error: the array has reached its maximum size"));
    else
        this->_array.push_back(number);
}

int Span::longestSpan() const
{
    if (_array.size() > 1)
    {
        std::vector<int>::const_iterator iterator_max = std::max_element(_array.begin(), _array.end());
        std::vector<int>::const_iterator iterator_min = std::min_element(_array.begin(), _array.end());
        return(*iterator_max - *iterator_min);
    }
    else if (_array.size() == 1)
    {
        throw(std::invalid_argument("Error: there is only one element in the array"));
    }
    throw(std::invalid_argument("Error: array is empty"));
}

int Span::shortestSpan()
{
    if (_array.size() > 1)
    {
        std::vector<int> sort = _array;
        std::sort(sort.begin(), sort.end());
        std::vector<int>::const_iterator iter = sort.begin();
        unsigned int i = 0;
        while (i < _array.size() - 1)
        {
            if (i && iter[i] != iter[i - 1])
                break ;
            i++;
        }
        return(iter[i] - iter[0]);
    }
    else if (_array.size() == 1)
    {
        throw(std::invalid_argument("Error: there is only one element in the array"));
    }
    throw(std::invalid_argument("Error: array is empty"));
}

void    Span::randomNumbers(long number)
{
    if (number > INT_MAX || number < INT_MIN)
        throw(std::invalid_argument("Error: number greater INT_MAX or less INT_MIN"));
    if (_array.size() == _N)
        throw(std::invalid_argument("Error: the array has reached its maximum size"));
    else
    {
        int i = 0;
        srand(time(0));
        while (_array.size() != _N && i < number)
        {
            if (rand() % 2)
                addNumber(rand() % number + 1);
            else
                addNumber((rand() % number + 1) * -1);
            i++;
        }
    }
}

void    Span::setArrayIter(std::vector<int>::iterator i1, std::vector<int>::iterator i2)
{
    if (_array.size() == _N)
        throw(std::invalid_argument("Error: the array has reached its maximum size"));
    while (this->_array.size() != this->_N && i1 != i2)
    {
        this->_array.push_back(*i1);
        ++i1;
    }
}

std::vector<int>& Span::getArray()
{
    return(this->_array);
}

unsigned int Span::getN() const
{
    return(this->_N);
}
Span& Span::operator=(const Span &s)
{
    // std::cout << "Assignation called" << std::endl;
    this->_N = s.getN();
    if (this->_array.size() != 0)
        this->_array.clear();
    std::vector<int>::const_iterator iter = s._array.begin();
    while (this->_array.size() != this->_N && iter != s._array.end())
    {
        this->_array.push_back(*iter);
        ++iter;
    }
    return(*this);
}

std::ostream& operator<<(std::ostream &o, Span &s)
{
    o << "\033[32m" << "N: " "\033[0m" << s.getN() << " |" << "\033[32m" << " max: " << "\033[0m" << s.longestSpan() <<
    " |" << "\033[32m" << " min: " << "\033[0m" << s.shortestSpan();  
    return(o);
}

void    Span::printArray()
{
    int i = 0;
    if (_array.size() > 0)
    {
        std::vector<int>::const_iterator iter = _array.begin();
        std::cout << "----------------------" << std::endl;
        while (iter != _array.end())
        {
            if (i == 2)
            {
                i = 0;
                std::cout << std::endl;
            }
            std::cout << *iter << " ";
            ++iter;
            ++i;
        }
        std::cout << "\n\033[32m" << "max element: " << "\033[0m" << *std::max_element(_array.begin(), _array.end()) << std::endl;
        std::cout << "\033[32m" << "min element: " << "\033[0m" << *std::min_element(_array.begin(), _array.end()) << std::endl;
        std::cout << "----------------------" << std::endl;
    }
}