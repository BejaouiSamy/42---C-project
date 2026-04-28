#include "PmergeMe.hpp"
#include <cstdlib>

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cerr << "Usage: ./PmergeMe \"expression\"" << std::endl;
        return 1;
    }
    PmergeMe pm;
    int i = 1;
    while (i < ac)
    {
        int num = atoi(av[i]);
        if(num <= 0)
        {
            std::cerr << "Error: invalid input" << std::endl;
            return 1;
        }
        pm.addNumber(num);
        i++;
    }
    pm.sort();
    return 0;

}