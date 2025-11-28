#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <stdlib.h>

class ClapTrap
{
    private:
        std::string _ClapTrap_name;
        unsigned int _health;
        unsigned int _stamina;
        unsigned int _attack;
    public:
        ClapTrap(void);
        ~ClapTrap(void);
        ClapTrap(const std::string& name);
        ClapTrap(const ClapTrap& other); // copie
        ClapTrap& operator=(ClapTrap const& other); // op affectation
        void attack(const std::string& target);
        void takeDamage(unsigned int damage);
        void beRepaired(unsigned int reparation);
        void status(void);
};

#endif