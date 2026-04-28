#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <deque>
#include <iostream>
#include <ctime>

class PmergeMe
{
    private:
        std::vector<int>    _containerOne;
        std::deque<int>     _containerTwo;
        void mergeInsertVector();
        void mergeInsertDeque();

    public:
        void addNumber(int n);
        void sort();
};


#endif