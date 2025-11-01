#include "../include/Zombie.hpp"

Zombie::Zombie(const std::string& name) : zombie_name(name)
{
    std::cout << "Zombie " << name << " is BORN MUHAHAHA !" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << zombie_name << " is officialy DEAD !" << std::endl;
}

void Zombie::announce() const
{
    std::cout << zombie_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}