#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contact
{
	private:
		static int instanceCount;
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string darkestSecret;
		std::string phoneNumber; // utilisation de std::string car dans certain cas, les numeros seront accompagne de - ou ()
	public:
		// getters
		std::string getFirstName() const { return firstName; }
		std::string getLastName() const { return lastName; }
		std::string getNickName() const {return nickName; }
		std::string getSecret() const {return darkestSecret; }
		std::string getPhoneNumber() const { return phoneNumber; }
		// setters
		void setFirstName(const std::string& name) { firstName = name; }
		void setLastName(const std::string& last) { lastName = last; }
		void setNickName(const std::string& nick) { nickName = nick; }
		void setSecret(const std::string& secret) { darkestSecret = secret; }
		void setPhoneNumber(const std::string& number) { phoneNumber = number; }
		// constructeur
		Contact(const std::string& name = "", 
        		const std::string& last = "", 
        		const std::string& nick = "", 
        		const std::string& secret = "", 
        		const std::string& number = "") 
    				: firstName(name), lastName(last), nickName(nick), 
      				darkestSecret(secret), phoneNumber(number)
					{
						instanceCount++;
					}
		// destructeur
		~Contact();
		// display
		void displayContact() const;
};

class PhoneBook
{
	private:
		Contact contacts[8];
		int currentIndex;
		int contactCount;
	public:
		void addContact();
		void searchContact();
		void displayContacts();

		PhoneBook() : contactCount(0),
				currentIndex(0)
		{
			std::cout << "PhoneBook created !" << std::endl;
		}
};

#endif
