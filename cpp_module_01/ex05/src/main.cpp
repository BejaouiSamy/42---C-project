#include "../include/Harl.hpp"

int main(void)
{
    Harl harl;

    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERRORS");
    harl.complain("RANDOM"); // test

    return (0);
}