#include "../include/Zombie.hpp"

int Zombie::index = 0;

Zombie::Zombie(const std::string& name) : zombie_name(name)
{
    std::cout << "Zombie #" << index++ << " " << name << " is born !" << std::endl;
}

void Zombie::announce() const
{
    std::cout << "#" << index << " " << zombie_name << " BraiiiiiiinnnzzzZ.." << std::endl;
}

Zombie::~Zombie()
{
    while (index > 0)
        std::cout << "Zombie named " << zombie_name << " and number: " << index-- << " is really DEAD !" << std::endl;
}

Zombie* zombieHorde(int N, const std::string name)
{
    int i;

    i = 0;
    Zombie *horde = new Zombie[N];
    while (i < N)
    {
        horde[i++] = Zombie(name);
    }
    return horde;
}