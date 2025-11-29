#include "../include/OtherAnimal.hpp"

Cat::Cat(void)
{
    std::cout << "Cat constructor called." << std::endl;
    type = "Cat";
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called." << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "*prrrrrrr* Meow !" << std::endl;
}

Dog::Dog(void)
{
    std::cout << "Dog constructor called." << std::endl;
    type = "Dog";
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called." << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "WOUAF WOUAF !" << std::endl;
}