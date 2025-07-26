#include "contact.hpp"
#include <iostream>

int main()
{
	PhoneBook phoneBook;
	std::string command;

	while (1)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT):     ";
		std::cin >> command;
		
		if (command == "ADD")
			phoneBook.addContact();
		else if (command == "SEARCH")
			phoneBook.searchContact();
		else if (command == "EXIT")
			break;
	}
}
