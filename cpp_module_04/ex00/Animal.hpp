#ifndef ANIMA_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal(void) {};
        virtual ~Animal(void) {};
        virtual void makeSound(void);
        void get_type();
};

#endif