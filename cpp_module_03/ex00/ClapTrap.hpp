#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <stdlib.h>

class ClapTrap
{
    private:
        std::string _ClapTrap_name;
        unsigned int _health = 10;
        unsigned int _stamina = 10;
        unsigned int _attack = 0;
    public:
        ClapTrap(const std::string& name);
        ClapTrap(void);
        ~ClapTrap(void);
        ClapTrap(const ClapTrap& other); // copie
        ClapTrap& operator=(ClapTrap const& other); // op affectation
        void attack(const std::string& target, int damage);
        void takeDamage(unsigned int damage);
        void beRepaired(unsigned int reparation);
        void status(void);
};

#endif