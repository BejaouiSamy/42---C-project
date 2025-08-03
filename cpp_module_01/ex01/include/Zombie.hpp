#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string zombie_name;
        static int index;
    
    public:
        Zombie(const std::string& name) : zombie_name(name);
        void announce();

};

#endif