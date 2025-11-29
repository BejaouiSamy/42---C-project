#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal(void);
        virtual ~Animal();
        Animal(const Animal& other);
        Animal& operator=(Animal const& other);
        virtual void makeSound(void) const;
        std::string getType() const;
};

#endif