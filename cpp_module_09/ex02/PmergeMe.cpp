#include "PmergeMe.hpp"

void PmergeMe::addNumber(int n)
{
    _containerOne.push_back(n);
    _containerTwo.push_back(n);
}

void PmergeMe::sort()
{
    std::cout << "Before.. : " << std::endl;
    size_t i = 0;
    while (i < _containerOne.size())
    {
        std::cout << _containerOne[i] << " ";
        i++;
    }
    std::cout << std::endl;

    // sort vector and mesure
    std::clock_t start = std::clock();
    mergeInsertVector();
    std::clock_t end = std::clock();
    double timeVector = (double)(end - start) / CLOCKS_PER_SEC * 1000000;
    
    // sort deque and mesure
    start = std::clock();
    mergeInsertDeque();
    end = std::clock();
    double timeDeque = (double)(end - start) / CLOCKS_PER_SEC * 1000000;

    std::cout << "After... : "  << std::endl;
    i = 0;
    while ( i < _containerOne.size())
    {
        std::cout << _containerOne[i] << " ";
        i++;
    }
    std::cout << std::endl;

    std::cout << "Time to process a range of " << _containerOne.size() << " element std::vector : " << timeVector << " us" << std::endl;
        std::cout << "Time to process a range of " << _containerTwo.size() << " element std::deque : " << timeDeque << " us" << std::endl;
}

void PmergeMe::mergeInsertVector()
{
    if (_containerOne.size() <= 1)
        return;
    size_t i = 0;
    while (i + 1 < _containerOne.size())
    {
        if(_containerOne[i] < _containerOne[i + 1])
            std::swap(_containerOne[i], _containerOne[i + 1]);
        i += 2;
    }
    std::vector<int> grands;
    std::vector<int> petits;
    i = 0;
    while (i + 1 < _containerOne.size())
    {
        grands.push_back(_containerOne[i]);
        petits.push_back(_containerOne[i + 1]);
        i += 2;
    }
    int leftover = -1;
    if (_containerOne.size() % 2 != 0)
        leftover = _containerOne.back();
    
    // recursive
    _containerOne = grands;
    mergeInsertVector();
    grands = _containerOne;
    if (!petits.empty())
    {
        std::vector<int>::iterator it = std::lower_bound(grands.begin(), grands.end(), petits[0]);
        grands.insert(it, petits[0]);
    }

    // jacobsthal
    std::vector<int> jacobsthal;
    jacobsthal.push_back(0);
    jacobsthal.push_back(1);
    while (jacobsthal.back() < (int)petits.size())
    {
        int n = jacobsthal.size();
        jacobsthal.push_back(jacobsthal[n - 1] + 2 * jacobsthal[n - 2]);
    }
    i = 2;
    while (i < jacobsthal.size())
    {
        int end = jacobsthal[i];
        int start = jacobsthal[i - 1];
        int j = end;
        while (j > start)
        {
            if (j - 1 < (int)petits.size())
            {
                std::vector<int>::iterator it = std::lower_bound(grands.begin(), grands.end(), petits[j - 1]);
                grands.insert(it, petits[j - 1]);
            }
            j--;
        }
        i++;
    }
    if (leftover != -1)
    {
        std::vector<int>::iterator it = std::lower_bound(grands.begin(), grands.end(), leftover);
        grands.insert(it, leftover);
    }
    _containerOne = grands;
}


void PmergeMe::mergeInsertDeque()
{
    if (_containerTwo.size() <= 1)
        return;
    size_t i = 0;
    while (i + 1 < _containerTwo.size())
    {
        if(_containerTwo[i] < _containerTwo[i + 1])
            std::swap(_containerTwo[i], _containerTwo[i + 1]);
        i += 2;
    }
    std::deque<int> grands;
    std::deque<int> petits;
    i = 0;
    while (i + 1 < _containerTwo.size())
    {
        grands.push_back(_containerTwo[i]);
        petits.push_back(_containerTwo[i + 1]);
        i += 2;
    }
    int leftover = -1;
    if (_containerTwo.size() % 2 != 0)
        leftover = _containerTwo.back();
    
    // recursive
    _containerTwo = grands;
    mergeInsertDeque();
    grands = _containerTwo;
    if (!petits.empty())
    {
        std::deque<int>::iterator it = std::lower_bound(grands.begin(), grands.end(), petits[0]);
        grands.insert(it, petits[0]);
    }

    // jacobsthal
    std::deque<int> jacobsthal;
    jacobsthal.push_back(0);
    jacobsthal.push_back(1);
    while (jacobsthal.back() < (int)petits.size())
    {
        int n = jacobsthal.size();
        jacobsthal.push_back(jacobsthal[n - 1] + 2 * jacobsthal[n - 2]);
    }
    i = 2;
    while (i < jacobsthal.size())
    {
        int end = jacobsthal[i];
        int start = jacobsthal[i - 1];
        int j = end;
        while (j > start)
        {
            if (j - 1 < (int)petits.size())
            {
                std::deque<int>::iterator it = std::lower_bound(grands.begin(), grands.end(), petits[j - 1]);
                grands.insert(it, petits[j - 1]);
            }
            j--;
        }
        i++;
    }
    if (leftover != -1)
    {
        std::deque<int>::iterator it = std::lower_bound(grands.begin(), grands.end(), leftover);
        grands.insert(it, leftover);
    }
    _containerTwo = grands;
}
/*
    samy@samy-VirtualBox:~/42_project/cpp_project/cpp_module_09/ex02$ ./PmergeMe 3 5 9 7 4
    Before.. : 
    3 5 9 7 4 
    After... : 
    0 0 4 7 9 
    Time to process a range of 5 element std::vector : 5 us
    Time to process a range of 5 element std::deque : 8 us
*/