#include "../include/HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon) 
    : name(name), weapon(weapon)  // Initialisation de la référence
{
}

void HumanA::attack() const
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}