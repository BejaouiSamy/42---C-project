#include "../include/Zombie.hpp"

Zombie::Zombie() : zombie_name("")
{

}

Zombie::~Zombie()
{
    std::cout << "Zombie " << zombie_name << " is really DEAD !" << std::endl;
}

//std::string& permet de passer par reference est eviter les copies de name
void Zombie::setName(const std::string& name)
{
    zombie_name = name;
}

void Zombie::announce() const
{
    std::cout << zombie_name << " BraiiiiiiinnnzzzZ.." << std::endl;
}