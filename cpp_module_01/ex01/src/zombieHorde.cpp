#include "../include/Zombie.hpp"

int Zombie::index = 0;

Zombie::Zombie(const std::string& name) : zombie_name(name)
{
    std::cout << "Zombie #" << index << " " << name << " is born !" << std::endl;
    index++;
}

void Zombie::announce() const
{
    std::cout "#" << index << " " << name << "BraiiiiiiinnnzzzZ.." << std::endl;
}

Zombie *heap_zombie(std::string name)
{
    Zombie *z = new Zombie(name);
    index++;
    return z;
}