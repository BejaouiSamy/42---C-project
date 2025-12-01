#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain(void);
        ~Brain();
        Brain(const Brain& other);
        Brain& operator=(Brain const& other);
};

#endif