#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
    public:
        ScavTrap(void);
        ScavTrap(const std::string& name);
        ~ScavTrap(void);
        ScavTrap(const ScavTrap& other); // copie
        ScavTrap& operator=(ScavTrap const& other); // op affectation
        void guardGate(void);
};

#endif