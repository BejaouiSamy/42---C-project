#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "Defaut constructor called." << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
{
    std::cout << "HEY ! I'm a service robot called " << name << " but my friend call me ClapTrap.. Or they should." << std::endl;
    _ClapTrap_name = name;
    _health = 10;
    _stamina = 10;
    _attack = 0;
}

ClapTrap::ClapTrap(ClapTrap const& other)
{
    std::cout << "Copy called." << std::endl;
    *this = other;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& other)
{
    std::cout << "Assignement operator called." << std::endl;
    if (this == &other)
        return (*this);
    _ClapTrap_name = other._ClapTrap_name;
    _health = other._health;
    _stamina = other._stamina;
    _attack = other._attack;
    return (*this);
}

ClapTrap::~ClapTrap(void)
{
    std::cout << " " << std::endl;
    std::cout << "Destructor called." << std::endl;
}

void ClapTrap::attack(const std::string& target)
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
        std::cout << _ClapTrap_name << " attack. " << target << " lose " << _attack << " hp !" << std::endl;
        _stamina--;
        std::cout << _ClapTrap_name << " losed 1 ep." << std::endl;
    } 
}

void ClapTrap::takeDamage(unsigned int damage)
{
    if (_health <= 0)
    {
        std::cout << _ClapTrap_name << " is already DEAD.. :'(" << std::endl;
        return;
    }
    std::cout << _ClapTrap_name << " took " << damage << " damage !" << std::endl;
    _health = _health - damage;

}

void ClapTrap::beRepaired(unsigned int reparation)
{
    if (_health == 0)
        return;
    else if (_stamina == 0)
        return;
    else
    {
        std::cout << "WOW ! " << _ClapTrap_name << " is reparing himself !! He gained " << reparation << " hp, That's crazy !" << std::endl;
        _health = _health + reparation;
        if (_health > 10)
            _health = 10;
        _stamina--;
        std::cout << _ClapTrap_name << " losed 1 ep." << std::endl;
    }
}

void ClapTrap::status()
{
    std::cout << " ... " << std::endl;
    if (_health <= 0)
    {
        std::cout << _ClapTrap_name << " is dead... a minute of silence please." << std::endl;
        return;
    }
    std::cout << "> " << _ClapTrap_name << " lp : " << _health << std::endl;
    std::cout << "> " << _ClapTrap_name << " stamina : " << _stamina << std::endl;
    if (_health % 2 == 0 && _health > 5)
        std::cout << "I feel extra ! I think.." << std::endl;
    else if (_health % 2 != 0 && _health > 5)
        std::cout << "I feel good, I feel ALIVE AHAHAH >:)" << std::endl;
    else if  (_health <= 5)
        std::cout << "I see a light.., it's white, it bright.. x_x" << std::endl;
    std::cout << " ... " << std::endl;
}