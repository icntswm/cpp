#ifndef BRAIN_H
# define BRAIN_H
# include <iostream>

class Brain
{
public:
    Brain();
    Brain(const Brain &b);
    ~Brain();
    std::string ideas[100];
    Brain& operator=(const Brain &b);
};

#endif