#include "../include/Fixed.hpp"

// COnstructeur par defaut
Fixed::Fixed(void) : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

// Constructor depuis int
Fixed::Fixed(int const n)
{
    std::cout << "int constructor called" << std::endl;
    _value = n << _fractionalBits;
}
// on converti un int pour uniformiser en interne.
// par ex 5 deviendra 5.0 (comparaison plus simple et calcul plus simple)

// Constructor depuis float
Fixed::Fixed(float const f)
{
    std::cout << "float constructor called" << std::endl;
    _value = roundf(f * (1 << _fractionalBits));
}

// Constructeur de copie
Fixed::Fixed(Fixed const& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

// Destructeur
Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

// Operateur d'affectation
Fixed& Fixed::operator=(Fixed const& other)
{
    std::cout << "Copy assignement op called" << std::endl;
    if (this != &other)
        _value = other.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    return(_value);
}
void Fixed::setRawBits(int const raw)
{
    _value = raw;
}

// COnversion vers float
float Fixed::toFloat(void) const
{
    return(float)_value / (1 << _fractionalBits);
}
// Conversion vers int
int Fixed::toInt(void) const
{
    return _value >> _fractionalBits;
}

// Surchage de l'operateur
std::ostream& operator<<(std::ostream& o, Fixed const& Fixed)
{
    o << Fixed.toFloat();
    return (o);
}

// Operateur de comparaison
bool Fixed::operator>(Fixed const &other) const
{
    return (this->toFloat() > other.toFloat());
}
bool Fixed::operator<(Fixed const &other) const
{
    return (this->toFloat() < other.toFloat());
}
bool Fixed::operator>=(Fixed const &other) const
{
    return (this->toFloat() >= other.toFloat());
}
bool Fixed::operator<=(Fixed const &other) const
{
    return (this->toFloat() <= other.toFloat());
}

// Operateur arithmetique
Fixed Fixed::operator+(Fixed const &other) const
{
    return (this->toFloat() + other.toFloat());
}
Fixed Fixed::operator-(Fixed const &other) const
{
    return (this->toFloat() - other.toFloat());
}
Fixed Fixed::operator*(Fixed const &other) const
{
    return (this->toFloat() * other.toFloat());
}
Fixed Fixed::operator/(Fixed const &other) const
{
    return (this->toFloat() / other.toFloat());
}

// Operateur incrementation/decrementation
Fixed& Fixed::operator++()
{
    this->_value++;
    return(*this);
}
Fixed& Fixed::operator--()
{
    this->_value--;
    return(*this);
}
Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    ++(*this);
    return (temp);
}
Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    --(*this);
    return (temp);
}

// Fonction static
Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b) ? a : b; // remplace if else
}
Fixed const& Fixed::min(Fixed const &a, Fixed const &b)
{
    return (a < b) ? a : b;
}
Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b) ? a : b;
}
Fixed const& Fixed::max(Fixed const &a, Fixed const &b)
{
    return (a > b) ? a : b;
}
