#include "../include/ClapTrap.hpp"
#include "../include/ScaveTrap.hpp"
#include "../include/FragTrap.hpp"

int main(void)
{
    ClapTrap claptrap("bob");
    ClapTrap c("alex");
    ClapTrap d;
    ScavTrap scavtrap("sc4v");
    ScavTrap a("amir");
    ScavTrap b;
    FragTrap e("alien");
    FragTrap f;
    b = a;
    d = c;
    f = e;

    claptrap.status();
    scavtrap.status();
    a.status();
    b.status();
    c.status();
    d.status();
    e.status();
    f.status();

    claptrap.attack("Rider");
    scavtrap.attack("rider2");
    e.attack("bouffon");
    a.takeDamage(75);
    claptrap.takeDamage(5);
    scavtrap.guardGate();
    d.takeDamage(50);
    f.highFivesGuys();
    
    claptrap.status();
    scavtrap.status();
    a.status();
    d.status();
}