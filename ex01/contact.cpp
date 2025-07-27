#include "contact.hpp"
#include <iostream>

int Contact::instanceCount = 0;

Contact::~Contact()
{
	instanceCount--;
	if (instanceCount == 0)
		std::cout << "Contacts deleted !" << std::endl;
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

std::string formatCol(const std::string& text)
{
	if (text.length() > 10)
		return text.substr(0, 9) + ".";
	return text;
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
	std::cout << std::setw(10) << std::right << "Index" << "|";
	std::cout << std::setw(10) << std::right << "First name" << "|";
	std::cout << std::setw(10) << std::right << "Last name" << "|";
	std::cout << std::setw(10) << std::right << "Nickname" << std::endl;
	while (i < contactCount)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << std::right << formatCol(contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << std::right << formatCol(contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << std::right << formatCol(contacts[i].getNickName()) << std::endl;
		i++;
	}
}

void PhoneBook::searchContact()
{
	displayContacts();
	std::string input;
	while (1)
	{
        std::cout << "Enter index: ";
        std::getline(std::cin, input);

		if (input.length() == 1 && input[0] >= '0' && input[0] <= '9')
		{
            int index = stoi(input);
            
            if (index < contactCount)
			{
                contacts[index].displayContact();
                break;
            }
			else
                std::cout << "Error: index out of range." << std::endl;
		}
        else
            std::cout << "Error: please enter a correct value." << std::endl;
	}
}

