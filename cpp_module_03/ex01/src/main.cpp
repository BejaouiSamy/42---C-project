#include "../include/ClapTrap.hpp"
#include "../include/ScaveTrap.hpp"

int main(void)
{
    ClapTrap claptrap("bob");
    ScavTrap scavetrap("sc4v");

    claptrap.status();
    scavetrap.status();

    claptrap.attack("Rider", 2);
    scavetrap.attack("rider2", 5);
    scavetrap.guardGate();
    
    claptrap.status();
    scavetrap.status();
}