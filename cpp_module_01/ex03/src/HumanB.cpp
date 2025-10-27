#include "../include/HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) 
    : name(name), weapon(NULL)  // Pas d'arme initialement
{
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;  // Stocke l'ADRESSE de l'arme
}

void HumanB::attack() const
{
    if (weapon != NULL)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " has no weapon!" << std::endl;
}