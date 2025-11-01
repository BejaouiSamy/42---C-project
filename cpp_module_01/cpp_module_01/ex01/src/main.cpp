#include "../include/Zombie.hpp"

int main(void)
{
    int N;
    int i;

    i = 0;
    N = 5;
    Zombie* horde = zombieHorde(N, "ghoul");
    while (i < N)
    {
        horde[i].announce();
        i++;
    }
    delete[] horde;
    return (0);
}