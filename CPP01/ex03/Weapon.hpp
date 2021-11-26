#ifndef WEAPON_H
# define WEAPON_H
# include <iostream>

class Weapon
{
private: 
    std::string weapon;
public:
    Weapon();
    Weapon(std::string gun);
    ~Weapon();
    void setType(std::string gun);
    const std::string &getType(void);
};

#endif