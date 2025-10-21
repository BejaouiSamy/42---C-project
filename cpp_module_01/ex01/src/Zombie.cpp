#include "../include/Zombie.hpp"

Zombie::Zombie() : zombie_name("")
{

}

Zombie::~Zombie()
{
    std::cout << "Zombie " << zombie_name << " is really DEAD !" << std::endl;
}

void Zombie::setName(const std::string& name)
{
    zombie_name = name;
}

void Zombie::announce() const
{
    std::cout << zombie_name << " BraiiiiiiinnnzzzZ.." << std::endl;
}