#include "../include/Zombie.hpp"

int main(void)
{
    Zombie *z = heap_zombie("Samy");
    z->announce();
    delete z;

    Zombie x = stack_zombie("Chama");
    x.announce();
}