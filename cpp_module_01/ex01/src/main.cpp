#include "../include/Zombie.hpp"

int main(void)
{
    Zombie *z = zombieHorde(5, "ghoul");
    z->announce();
}