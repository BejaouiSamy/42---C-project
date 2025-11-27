#include "../include/ClapTrap.hpp"
#include "../include/ScaveTrap.hpp"

int main(void)
{
    ClapTrap claptrap("bob");
    ClapTrap c("alex");
    ClapTrap d;
    ScavTrap scavtrap("sc4v");
    ScavTrap a("amir");
    ScavTrap b;
    b = a;
    d = c;

    claptrap.status();
    scavtrap.status();
    a.status();
    b.status();
    c.status();
    d.status();

    claptrap.attack("Rider", 2);
    scavtrap.attack("rider2", 5);
    a.takeDamage(75);
    claptrap.takeDamage(5);
    scavtrap.guardGate();
    d.takeDamage(50);
    
    claptrap.status();
    scavtrap.status();
    a.status();
    d.status();
}