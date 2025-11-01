#ifndef FIXED
#define FIXED

#include <iostream>

class Fixed
{
    private:
        int _fixed_value;
        int _fractionnalBits;
    public:
        Fixed();
        ~Fixed();
        int getRawBits(void); // retourne la valeur brute - const ?
        void setRawBits(int const raw); // initialise la valeur brute

};


#endif