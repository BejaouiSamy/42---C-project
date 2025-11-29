#include "../include/Animal.hpp"
#include "../include/OtherAnimal.hpp"


int main(void)
{
    const Animal* meta = new Animal();
    const Animal* j = new Cat();
    const Animal* i = new Dog();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

}