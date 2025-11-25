#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap claptrap("bob");
    ClapTrap claptrap2("adam");
    claptrap.attack("Rider", 2);
    claptrap.takeDamage(2);
    claptrap2.takeDamage(1);
    claptrap.takeDamage(2);
    claptrap.status();
    claptrap2.status();
    claptrap.takeDamage(2);
    claptrap2.takeDamage(2);
    claptrap2.takeDamage(2);
    claptrap.beRepaired(4);
    claptrap.takeDamage(2);
    claptrap.status();
    claptrap2.status();
    claptrap.takeDamage(2);
    claptrap.takeDamage(2);
    claptrap.takeDamage(2);
    claptrap.attack("Rider", 2);
    claptrap.status();
    claptrap2.status();

}