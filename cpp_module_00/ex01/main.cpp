#include "contact.hpp"
#include <iostream>

int main()
{
	Contact user1;
	user1.setFirstName("Samy");
	user1.setLastName("Bejaoui");
	user1.setNickName("oui");
	user1.setSecret("je mange trop");
	user1.setPhoneNumber("0606060606");
	user1.displayContact();
}
