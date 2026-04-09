#include "../include/Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern& other)
{
    (void)other;
}

Intern& Intern::operator=(const Intern& other)
{
    (void)other;
    return *this;
}

Intern::~Intern()
{
}

static AForm* createShrubbery(std::string target) {
    return new ShrubberyCreationForm(target);
}

static AForm* createRobotomy(std::string target) {
    return new RobotomyRequestForm(target);
}

static AForm* createPresidential(std::string target) {
    return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(std::string name, std::string target)
{
    std::map<std::string, AForm*(*)(std::string)> formMap;
    formMap["ShrubberyCreationForm"]  = &createShrubbery;
    formMap["RobotomyRequestForm"]    = &createRobotomy;
    formMap["PresidentialPardonForm"] = &createPresidential;
    std::map<std::string, AForm*(*)(std::string)>::iterator it = formMap.find(name);
    if (it == formMap.end())
    {
        std::cerr << "Intern cannot create " << name << " because it is unknown." << std::endl;
        return NULL;
    }
    std::cout << "Intern creates " << name << std::endl;
    return it->second(target);
    
}