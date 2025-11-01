#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon* weapon;  // POINTEUR (peut être NULL)

public:
    HumanB(std::string name);  // Pas d'arme au départ
    void setWeapon(Weapon& weapon);
    void attack() const;
};

#endif