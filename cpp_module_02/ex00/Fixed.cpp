#include "Fixed.hpp"

Fixed::Fixed() : _fixed_value(0)
{
    std::cout << "Defaut constructor called" << std::endl;
}


Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void)
{
    const int converting_value = _fixed_value;
    return(converting_value);
}

void Fixed::setRawBits(int a)
{
    a = _fixed_value;
}