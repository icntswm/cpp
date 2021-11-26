#include "Karen.hpp"

void    Karen::filterComplain(int point)
{
    switch (point)
    {
    case 0:
        this->debug();
        break ;
    case 1:
        this->info();
        break ;
    case 2:
        this->warning();
        break ;
    case 3:
        this->error();
        break ;
    default:
        std::cout << "Probably complaining about insignificant problems" << std::endl;
        break;
    }
}

void    Karen::complain(std::string level)
{
    std::string levels[] = {"debug", "info", "warning", "error"};
    int i = 0;
    while (i < 4 && levels[i] != level)
        i++;
    while (i <= 4)
    {
        if (i < 4)
            std::cout << "-----" << levels[i] << "-----" << std::endl;
        this->filterComplain(i);
        i++;
        if (i == 4)
            break ;
    }
}

Karen::Karen(void)
{
}

Karen::~Karen(void)
{
}

void    Karen::debug(void)
{
    std::cout << "I love to get extra bacon\
for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\
 I just love it!" << std::endl;
}

void    Karen::info(void)
{
    std::cout << "I cannot believe adding extra\
bacon cost more money. You don’t put enough! \
If you did I would not have to ask for it!" << std::endl;
}

void    Karen::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. \
I’ve been coming here for years and you just started \
working here last month." << std::endl;
}

void    Karen::error(void)
{
    std::cout << "This is unacceptable, \
I want to speak to the manager now." << std::endl;
}
