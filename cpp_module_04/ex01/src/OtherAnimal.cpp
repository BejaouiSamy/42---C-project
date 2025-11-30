#include "../include/OtherAnimal.hpp"

// ---cat
Cat::Cat(void)
{
    std::cout << "Cat constructor called." << std::endl;
    brain = new Brain();
    type = "Cat";
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called." << std::endl;
    delete brain;
}

void Cat::makeSound(void) const
{
    std::cout << "*prrrrrrr* Meow !" << std::endl;
}

Cat& Cat::operator=(Cat const& other)
{
    std::cout << "Assignement operator called." << std::endl;
    if (this == &other)
        return (*this);
    Animal::operator=(other);
    return (*this);
}

Cat::Cat(Cat const& other) : Animal()
{
    std::cout << "Copy called." << std::endl;
    *this = other;
}

// ---Dog
Dog::Dog(void)
{
    std::cout << "Dog constructor called." << std::endl;
    brain = new Brain();
    type = "Dog";
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called." << std::endl;
    delete brain;
    std::cout << "Brain supprimé" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "WOUAF WOUAF !" << std::endl;
}

Dog& Dog::operator=(Dog const& other)
{
    std::cout << "Assignement operator called." << std::endl;
    if (this == &other)
        return (*this);
    Animal::operator=(other);
    delete this->brain;
    this->brain = new Brain(*other.brain);
    return (*this);
}

Dog::Dog(Dog const& other) : Animal()
{
    std::cout << "Copy called." << std::endl;
    this->brain = new Brain(*other.brain);
}

// ---Wrong animal
WrongAnimal::WrongAnimal(void)
{
    std::cout << "Wrong animal constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "Wrong animal destructor called." << std::endl;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "Hello, i'm an animal." << std::endl;
}

// ---Wrong cat
WrongCat::WrongCat(void)
{
    std::cout << "Wrong cat constructor called." << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << "Wrong cat destructor called." << std::endl;
}

void WrongCat::makeSound(void) const
{
    std::cout << "MEOW MEOW" << std::endl;
}