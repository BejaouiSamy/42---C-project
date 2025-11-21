#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int _value;
        static const int _fractionalBits = 8;
    public:
        // Constructeur
        Fixed(void);
        Fixed(int const n);
        Fixed(float const f);
        Fixed(Fixed const& other);
        // Destructeur
        ~Fixed(void);
        // Operateur d'affectation
        Fixed& operator=(Fixed const& other);

        // SUrcharge de comparaison
        bool operator>(Fixed const &other) const;
        bool operator<(Fixed const &other) const;
        bool operator>=(Fixed const &other) const;
        bool operator<=(Fixed const &other) const;
        bool operator==(Fixed const &other) const;
        bool operator!=(Fixed const &other) const;
        // Surcharge arithmetiques
        Fixed operator+(Fixed const &other) const;
        Fixed operator-(Fixed const &other) const;
        Fixed operator*(Fixed const &other) const;
        Fixed operator/(Fixed const &other) const;
        // Surcharge incrementation/decremantation
        Fixed& operator++(); //++a
        Fixed operator++(int); // a++
        Fixed& operator--(); // --a
        Fixed operator--(int); // a--
        // fonction min/max
        static Fixed& min(Fixed &a, Fixed &b);
        static Fixed const& min(Fixed const &a, Fixed const &b);
        static Fixed& max(Fixed &a, Fixed &b);
        static Fixed const& max(Fixed const &a, Fixed const &b);

        // Getters
        int getRawBits(void) const;
        void setRawBits(int const raw);
        // Conversion
        float toFloat(void) const;
        int toInt(void) const;

};
// Surcharge de l'operateur
std::ostream& operator<<(std::ostream& o, Fixed const& fixed);

#endif