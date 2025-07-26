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
	std::cout << "-----------" << std::endl;
}

std::string Contact::getFirstName() const {
    return firstName;
}

std::string Contact::getLastName() const {
    return lastName;
}

std::string Contact::getNickName() const {
    return nickName;
}

std::string Contact::getSecret() const {
    return darkestSecret;
}

std::string Contact::getPhoneNumber() const {
    return phoneNumber;
}

void Contact::setFirstName(const std::string& name) {
    firstName = name;
}

void Contact::setLastName(const std::string& last) {
    lastName = last;
}

void Contact::setNickName(const std::string& nick) {
    nickName = nick;
}

void Contact::setSecret(const std::string& secret) {
    darkestSecret = secret;
}

void Contact::setPhoneNumber(const std::string& number) {
    phoneNumber = number;
}
