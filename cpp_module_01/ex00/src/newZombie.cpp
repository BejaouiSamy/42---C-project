#include "../include/Zombie.hpp"

Zombie *heap_zombie(std::string name)
{
    return new Zombie(name);
}