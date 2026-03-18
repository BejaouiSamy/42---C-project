#include "Easyfind.hpp"
#include <list>
#include <vector>

int main(void)
{
    std::list<int> lst;
    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);
    lst.push_back(4);
    lst.push_back(5);
    try
    {
        std::list<int>::iterator it = easyfind(lst, 2);
        std::cout << "found: " << *it << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    try
    {
        easyfind(lst, 17);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return (0);
}