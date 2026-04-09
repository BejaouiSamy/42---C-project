#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include <map>
#include "../include/Intern.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"

class Intern 
{
    public:
        Intern();
        Intern(const Intern& other);
        Intern& operator=(const Intern& other);
        ~Intern();
    
        AForm* makeForm(std::string name, std::string target);
        
};

#endif