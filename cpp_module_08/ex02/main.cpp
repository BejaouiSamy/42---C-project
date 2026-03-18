#include <iostream>
#include <list>
#include "MutantStack.hpp"

int main(void)
{
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl;

    mstack.pop(); // remove top int

    std::cout << mstack.size() << std::endl;

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it; // just to show that iterator worked
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::stack<int> s(mstack);

    std::cout << "--- list reference output ---" << std::endl;
    std::list<int> lst;

    lst.push_back(5);
    lst.push_back(17);

    std::cout << lst.back() << std::endl;

    lst.pop_back();

    std::cout << lst.size() << std::endl;

    std::list<int>::iterator lit = lst.begin();
    std::list<int>::iterator lite = lst.end();

    ++lit;
    --lit;
    while (lit != lite)
    {
        std::cout << *lit << std::endl;
        ++lit;
    }

    return (0);
}
