#include "contact.hpp"
#include <iostream>

Contact::~Contact()
{
	std::cout << "Contact deleted !" << std::endl;
}

void Contact::displayContact() const
{
	std::cout << "---Contact---" << std::endl;
	std::cout << "Name:     " << this->firstName << std::endl;
	std::cout << "Last name:     " << this->lastName << std::endl;
	std::cout << "Known as:     " << this->nickName << std::endl;
	std::cout << "Darkest secret, be ready... :     " << this->darkestSecret << std::endl;
	std::cout << "Phone number:     " << this->phoneNumber << std::endl;
	std::cout << "-------------" << std::endl;
}

void PhoneBook::addContact()
{
	std::string input;

	std::cout << "Enter first Name:     ";
	std::getline(std::cin, input);
	contacts[currentIndex].setFirstName(input);

	std::cout << "Enter last Name:     ";
        std::getline(std::cin, input);
        contacts[currentIndex].setLastName(input);

	std::cout << "Enter nickname:     ";
        std::getline(std::cin, input);
        contacts[currentIndex].setNickName(input);

	std::cout << "Enter the darkest secret:     ";
        std::getline(std::cin, input);
        contacts[currentIndex].setSecret(input);

	std::cout << "Enter the phone number:     ";
        std::getline(std::cin, input);
        contacts[currentIndex].setPhoneNumber(input);

	currentIndex = (currentIndex + 1) % 8;
	if (contactCount < 8)
		contactCount++;
}

void PhoneBook::displayContacts()
{
	int i;

	i = 0;
	if (contactCount == 0)
	{
		std::cout << "No contact available." << std::endl;
		return;
	}
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First name" << "|";
	std::cout << std::setw(10) << "Last name" << "|";
	std::cout << std::setw(10) << "Nickname" << std::endl;
	while (i < contactCount)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << contacts[i].getFirstName() << "|";
		std::cout << std::setw(10) << contacts[i].getLastName() << "|";
		std::cout << std::setw(10) << contacts[i].getNickName() << std::endl;
		i++;
	}
}


void PhoneBook::searchContact()
{
	displayContacts();
	int index;
	std::cout << "Enter index:     ";
	std::cin >> index;
	if (index >= 0 && index < contactCount)
		contacts[index].displayContact();
}

