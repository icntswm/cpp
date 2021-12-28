#ifndef SPAN_H
# define SPAN_H
# include <iostream>
# include <vector>
# include <algorithm>
# include <limits.h>
# include <stdlib.h>

class Span
{
private:
    unsigned int _N;
    std::vector<int> _array;
public:
    Span();
    Span(unsigned int n);
    Span(const Span &s);
    ~Span();
    Span&   operator=(const Span &s);
    void    addNumber(long number);
    int     longestSpan() const;
    int     shortestSpan();
    void    randomNumbers(long number);
    void    setArrayIter(std::vector<int>::iterator i1, std::vector<int>::iterator i2);
    std::vector<int>& getArray();
    unsigned int getN() const;
    void    printArray();
};

std::ostream& operator<<(std::ostream &o, Span &s);

#endif