#include "../include/Weapon.hpp"
#include "../include/HumanA.hpp"
#include "../include/HumanB.hpp"

int main()
{
    // Test avec HumanA (référence)
    {
        Weapon club = Weapon("crude spiked club");
        
        HumanA bob("Bob", club);  // Bob reçoit l'arme IMMÉDIATEMENT
        bob.attack();
        club.setType("some other type of club");
        bob.attack();  // Bob voit le changement (même arme)
    }
    
    // Test avec HumanB (pointeur)
    {
        Weapon club = Weapon("crude spiked club");
        
        HumanB jim("Jim");  // Jim n'a PAS d'arme au départ
        jim.setWeapon(club);  // On lui donne l'arme APRÈS
        jim.attack();
        club.setType("some other type of club");
        jim.attack();  // Jim voit le changement (même arme)
    }
    
    return 0;
}