#ifndef CHARACTER_H
# define CHARACTER_H
# include "ICharacter.hpp"

class Character : public ICharacter
{
private:
    std::string _name;
    AMateria *inv[4];
public:
    Character();
    Character(const std::string &name);
    Character(const Character &c);
    ~Character();
    Character& operator=(const Character &c);
    virtual std::string const & getName() const;
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
};

#endif