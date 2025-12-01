#include "../include/Animal.hpp"
#include "../include/OtherAnimal.hpp"


int main(void)
{
    int i;

    i = 0;
    std::cout << "=== TEST ARRAY POLYMORPHISME ===" << std::endl;
    Animal* array[4];
    while (i < 4)
    {
        if (i < 2)
        {
            array[i] = new Dog();
        }
        else
            array[i] = new Cat();
        i++;
    }
    i--;
    while (i >= 0)
    {
        std::cout << array[i]->getType() << " " << std::endl;
        array[i]->makeSound();
        delete array[i];
        i--;
    }


    std::cout << "\n=== TEST DEEP COPY BRAIN ===" << std::endl;
    Dog basic;
    {
        Dog tmp = basic; // Constructeur de copie
        std::cout << "Adresse Brain de basic: " << &basic << std::endl;
        std::cout << "Adresse Brain de tmp: " << &tmp << std::endl;
        // Les adresses doivent être différentes
    } // tmp est détruit ici, basic doit rester intact
    std::cout << "basic existe toujours sans crash" << std::endl;

    std::cout << "\n=== TEST COPY TEST ===" << std::endl;
    const Animal* k = new Dog();
    const Animal* j;
    j = k;
    std::cout << j->getType() << " " << std::endl;
    std::cout << k->getType() << " " << std::endl;
    k->getType();
    j->getType();
    k->makeSound();
    j->makeSound();

}