#include "../include/Harl.hpp"

Harl::Harl() {}
Harl::~Harl() {}

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << " I love having extra bacon for my burger !" << std::endl;
}

void Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << " I cannot believe adding extra bacon cost more money !" << std::endl;
}
void Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << " I think I deserve to have extra for free !" << std::endl;
}
void Harl::error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << " This is unacceptable ! I want the manager NOW." << std::endl;
}


void Harl::complain(std::string level)
{
    int i;
    typedef void (Harl::*HarlMemFn)(void); // creation d'alias pour simplifier la lisibilitee

    i = 0;
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    HarlMemFn action[4] = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    while (i < 4)
    {
        if (level == levels[i])
        {
            (this->*action[i])();
            return;
        }
        i++;
    }
    std::cout << "[ Probably complaining for nothing... again ]" << std::endl;
}