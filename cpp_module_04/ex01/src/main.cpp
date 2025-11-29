#include "../include/Animal.hpp"
#include "../include/OtherAnimal.hpp"


int main(void)
{

    std::cout << "=== TEST POLYMORPHISME ===" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound(); // Doit afficher le son du chat
    j->makeSound(); // Doit afficher le son du chien
    meta->makeSound(); // Son générique d'Animal

    delete meta;
    delete j;
    delete i;

    std::cout << "\n=== TEST DEEP COPY BRAIN ===" << std::endl;
    Dog basic;
    {
        Dog tmp = basic; // Constructeur de copie
        std::cout << "Adresse Brain de basic: " << &basic << std::endl;
        std::cout << "Adresse Brain de tmp: " << &tmp << std::endl;
        // Les adresses doivent être différentes
    } // tmp est détruit ici, basic doit rester intact
    std::cout << "basic existe toujours sans crash" << std::endl;

}