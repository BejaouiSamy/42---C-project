#include "../include/Bureaucrat.hpp"

int main() {
    try 
    {
        Bureaucrat b1("Alice", 1);
        std::cout << b1 << std::endl;
        std::cout << std::endl;
        //b1.incrementGrade(); --

    } 
    catch (const std::exception& e) 
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try 
    {
        Bureaucrat b2("Bob", 150);
        std::cout << b2 << std::endl;
        std::cout << std::endl;
        //b2.decrementGrade(); ++
    } 
    catch (const std::exception& e) // correct. sans le & on perd le polymorphisme et on ne peut pas attraper les exceptions dérivées
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try 
    {
        std::cout << "Charlie : " << std::endl;
        Bureaucrat b3("Charlie", 0);
        std::cout << b3 << std::endl;
        std::cout << std::endl;
    } 
    catch (const std::exception& e) 
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    try 
    {
        std::cout << "Dave : " << std::endl;
        Bureaucrat b4("Dave", 151);
        std::cout << b4 << std::endl;
        std::cout << std::endl;

    } 
    catch (const std::exception& e) 
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    // exception lancee avant la creation de lobjet
    Bureaucrat b5("Mike", 150);
    try
    {
        Bureaucrat b6 = b5;
        std::cout << b6 << std::endl;
        std::cout << std::endl;

    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}