#include "../include/FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
    std::cout << "FragTrap constructor called." << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    _ClapTrap_name = name;
    _health = 100;
    _stamina = 100;
    _attack = 30;
    std::cout << "Hey, hey, hey ! i'm " << name << ", i'm here for something but dont know yet..." << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor called." << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const& other)
{
    std::cout << "FragTrap Assignement operator called." << std::endl;
    if (this == &other)
        return (*this);
    ClapTrap::operator=(other);
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "GUYS ! High five please !" << std::endl;
}