#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
        std::string _scav_name;
    public:
        ScavTrap(void);
        ScavTrap(const std::string& name);
        ~ScavTrap(void);
        ScavTrap(const ScavTrap& other); // copie
        ScavTrap& operator=(ScavTrap const& other); // op affectation
        void guardGate(void);
        void attack(const std::string target);
};

#endif