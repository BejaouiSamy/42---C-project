#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <stdexcept>
#include <iostream>
template <typename T> // declared as a generic parameter

typename T::iterator easyfind(T& container, int i) // say T::iterator is a type nothing else
{
    typename T::iterator it = std::find(container.begin(), container.end(), i);
    if(container.end() == it)
    {
        throw std::runtime_error("element not found");
    }
    return it;

}
#endif