#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
    private:
        std::string type;

    public:
        Weapon(std::string type);  // Constructeur
        const std::string& getType() const;  // Getter
        void setType(std::string newType);   // Setter
};

// Constructeur initalise
// Getter lira
// Setter actualisera

#endif