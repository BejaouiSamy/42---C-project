#include <string>
#include <iostream>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string* stringPTR = &string;
    //stringREF = alias et string& = ref a un string
    std::string& stringREF = string;

    std::cout << "Adresse de string:    " << &string << std::endl;
    std::cout << "Adresse dans stringPTR: " << stringPTR << std::endl;
    std::cout << "Adresse de stringREF:   " << &stringREF << std::endl;

    std::cout << "Valeur de string:    " << string << std::endl;
    std::cout << "Valeur via stringPTR: " << *stringPTR << std::endl;
    std::cout << "Valeur via stringREF: " << stringREF << std::endl;

    return 0;
}