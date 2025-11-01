#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string zombie_name;
    public:
        Zombie(const std::string& name = "");
        ~Zombie();
        void announce() const;
        std::string heap_zombie(const std::string);
};

Zombie *heap_zombie(const std::string name);
Zombie stack_zombie(const std::string name);

#endif