#include "../include/ScaveTrap.hpp"

ScavTrap::ScavTrap(ScavTrap const& other) : ClapTrap(other)
{
    std::cout << "Sc4v_tp copy called." << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
    _scav_name = name;
    _health = 100;
    max_health = _health;
    _stamina = 50;
    _attack = 20;
    std::cout << "Halt, moon citizen, I'm " << name << ". Here to defend, here to kill." << std::endl;

}

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "sc4v_tp constructor created." << std::endl;

}

ScavTrap& ScavTrap::operator=(ScavTrap const& other)
{
    std::cout << "Sc4v_tp Assignement operator called." << std::endl;
    if (this == &other)
        return (*this);
    ClapTrap::operator=(other);
    return (*this);
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "Sc4v_Tp destructor called." << std::endl;
}

void ScavTrap::guardGate(void)
{
    std::cout << "I, the magnificient " << _scav_name << ", switch to defend mode !" << std::endl;
}

void ScavTrap::attack(const std::string target)
{
        if (_health == 0)
    {
        std::cout << _ClapTrap_name << " is dead." << std::endl;
        return;
    }
    else if (_stamina == 0)
    {
        std::cout << _ClapTrap_name << " is out of stamina." << std::endl;
        return;
    }
    else
    {
        std::cout << _ClapTrap_name << " try to explose the " << target << "'s face !! he lose " << _attack << " hp !" << std::endl;
        _stamina--;
        std::cout << _ClapTrap_name << " losed 1 ep." << std::endl;
    } 
}