#include "Character.hpp"

Character::Character() : _name("mike")
{
    std::cout << "Character constructor called(default)" << std::endl;
    int i;

    i = 0;
    while (i < 4)
    {
        this->inv[i] = NULL;
        i++;
    }
}

Character::Character(const std::string &name) : _name(name)
{
    std::cout << "Character constructor called(name)" << std::endl;
    int i;

    i = 0;
    while (i < 4)
    {
        this->inv[i] = NULL;
        i++;
    }
}

Character::Character(const Character &c)
{
    std::cout << "Character constructor called(copy)" << std::endl;
    int i;

    i = 0;
    while (i < 4)
    {
        this->inv[i] = NULL;
        i++;
    }
    *this = c;
}

Character::~Character()
{
    std::cout << "Character destructor called" << std::endl;
}

std::string const& Character::getName() const
{
    return(_name);
}

void    Character::use(int idx, ICharacter& target)
{
    int i;

    i = 0;
    while (i < 4)
    {
        if (i == idx && inv[i])
            inv[i]->use(target);
        i++;
    }
}

void    Character::equip(AMateria *m)
{
    std::cout << "\033[35m" << "Character equip" << "\033[0m" << std::endl;
    int i;

    i = 0;
    while (i < 4)
    {
        if (inv[i])
            i++;
        else
        {
            inv[i] = m;
            break ;
        }
    }   
}

void Character::unequip(int idx)
{
    if (idx > 3 || idx < 0)
        return ;
    else
        this->inv[idx] = NULL;
}

Character& Character::operator=(const Character &c)
{
    std::cout << "Cure assignment" << std::endl;
    this->_name = c.getName();
    int i;

    i = 0;
    while (i < 4)
    {
        if (this->inv[i])
            delete this->inv[i];
        inv[i] = c.inv[i];
        i++;
    }
    return (*this);
}
