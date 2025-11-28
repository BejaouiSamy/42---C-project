#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

    private:

    public:
        FragTrap(void);
        ~FragTrap(void);
        FragTrap(const std::string& name);
        FragTrap(const FragTrap& other);
        FragTrap& operator=(FragTrap const& other);
        void highFivesGuys(void);
};

#endif