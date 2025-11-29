#include "../include/Brain.hpp"

Brain::Brain(void)
{
    
}

Brain::~Brain()
{

}

Brain& Brain::operator=(Brain const& other)
{
    int i;

    i = 0;
    std::cout << "Assignement called." << std::endl;
    if (this == &other)
        return *this;
    while (i < 100)
    {
        this->ideas[i] = other.ideas[i];
        i++;
    }
    return (*this);
}

Brain::Brain(const Brain& other)
{
    int i;

    i = 0;
    std::cout << "Copy constructor called." << std::endl;
    while (i < 100)
    {
        this->ideas[i] = other.ideas[i];
        i++;
    }
}