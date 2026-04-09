#include "../include/Intern.hpp"

int main()
{
    // --- Test 1 : ShrubberyCreationForm (sign:145, execute:137) ---
    std::cout << "--- Test 1: ShrubberyCreationForm ---" << std::endl;
    try
    {
        Bureaucrat b("Alice", 130);
        ShrubberyCreationForm f("home");
        std::cout << f << std::endl;
        b.signForm(f);
        b.executeForm(f);
    }
    catch (const std::exception& e)
    { std::cerr << "Exception: " << e.what() << std::endl; }

    // --- Test 2 : RobotomyRequestForm (sign:72, execute:45) ---
    std::cout << "\n--- Test 2: RobotomyRequestForm ---" << std::endl;
    try
    {
        Bureaucrat b("Bob", 45);
        RobotomyRequestForm f("Bender");
        b.signForm(f);
        b.executeForm(f);
        b.executeForm(f);
    }
    catch (const std::exception& e)
    { std::cerr << "Exception: " << e.what() << std::endl; }

    // --- Test 3 : PresidentialPardonForm (sign:25, execute:5) ---
    std::cout << "\n--- Test 3: PresidentialPardonForm ---" << std::endl;
    try
    {
        Bureaucrat b("Charlie", 5);
        PresidentialPardonForm f("Arthur Dent");
        b.signForm(f);
        b.executeForm(f);
    }
    catch (const std::exception& e)
    { std::cerr << "Exception: " << e.what() << std::endl; }

    // --- Test 4 : execute sans signature ---
    std::cout << "\n--- Test 4: execute sans signature ---" << std::endl;
    try
    {
        Bureaucrat b("Dave", 1);
        ShrubberyCreationForm f("office");
        b.executeForm(f);
    }
    catch (const std::exception& e)
    { std::cerr << "Exception: " << e.what() << std::endl; }

    // --- Test 5 : grade trop bas pour signer ---
    std::cout << "\n--- Test 5: grade trop bas pour signer ---" << std::endl;
    try
    {
        Bureaucrat b("Eve", 150);
        PresidentialPardonForm f("Target");
        b.signForm(f);
        b.executeForm(f);
    }
    catch (const std::exception& e)
    { std::cerr << "Exception: " << e.what() << std::endl; }

    // --- Test 6 : Intern cree un formulaire valide ---
    std::cout << "\n--- Test 6: Intern makeForm valide ---" << std::endl;
    try
    {
        Intern intern;
        AForm* f = intern.makeForm("RobotomyRequestForm", "Bender");
        Bureaucrat b("Stagiaire", 1);
        b.signForm(*f);
        b.executeForm(*f);
        delete f;
    }
    catch (const std::exception& e)
    { std::cerr << "Exception: " << e.what() << std::endl; }

    // --- Test 7 : Intern cree un formulaire inconnu ---
    std::cout << "\n--- Test 7: Intern makeForm inconnu ---" << std::endl;
    try
    {
        Intern intern;
        AForm* f = intern.makeForm("CafeForm", "espresso");
        delete f;
    }
    catch (const std::exception& e)
    { std::cerr << "Exception: " << e.what() << std::endl; }

    return 0;
}