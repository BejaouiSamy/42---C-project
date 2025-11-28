#include "../include/ClapTrap.hpp"

int main(void)
{
    ClapTrap claptrap("bob");
    ClapTrap claptrap2("adam");
    ClapTrap a;
    a = claptrap2;
    claptrap.attack("Rider");
    claptrap.takeDamage(2);
    claptrap2.takeDamage(1);
    claptrap.takeDamage(2);
    claptrap.status();
    claptrap2.status();
    claptrap.takeDamage(2);
    claptrap2.takeDamage(2);
    claptrap2.takeDamage(2);
    claptrap.beRepaired(30);
    claptrap.takeDamage(2);
    claptrap.status();
    claptrap2.status();
    claptrap.takeDamage(2);
    claptrap.takeDamage(2);
    claptrap.attack("Rider");
    claptrap.attack("Rider");
    claptrap.attack("Rider");
    claptrap.attack("Rider");
    claptrap.attack("Rider");
    claptrap.attack("Rider");
    claptrap.attack("Rider");
    claptrap.attack("Rider");
    claptrap.attack("Rider");
    claptrap.attack("Rider");
    claptrap.status();
    claptrap2.status();
    a.status();

}