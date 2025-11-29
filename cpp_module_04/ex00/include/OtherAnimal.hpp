#ifndef OTHERANIMAL_HPP
#define OTHERANIMAL_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat(void);
        virtual ~Cat(void);
        void makeSound(void) const;
};

class Dog : public Animal
{
    public:
        Dog(void);
        virtual ~Dog(void);
        void makeSound(void) const;
};


#endif