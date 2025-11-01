#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string zombie_name;
    
    public:
        Zombie();
        ~Zombie();
        void announce() const;
        void setName(const std::string& name);

};

Zombie* zombieHorde(int N, std::string name);

#endif