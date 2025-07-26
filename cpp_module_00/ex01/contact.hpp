#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>
class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string darkestSecret;
		std::string phoneNumber; // utilisation de std::string car dans certain cas, les numeros seront accompagne de - ou ()
	public:
		// getters
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickName() const;
		std::string getSecret() const;
		std::string getPhoneNumber() const;
		// setters
		void setFirstName(const std::string& name);
		void setLastName(const std::string& last);
		void setNickName(const std::string& nick);
		void setSecret(const std::string& secret);
		void setPhoneNumber(const std::string& number);
		// constructeur
		Contact(const std::string& name = "", 
        		const std::string& last = "", 
        		const std::string& nick = "", 
        		const std::string& secret = "", 
        		const std::string& number = "") 
    				: firstName(name), lastName(last), nickName(nick), 
      				darkestSecret(secret), phoneNumber(number)
			{
    				std::cout << "Contact created!" << std::endl;
			}
		// destructeur
		~Contact();
		// display
		void displayContact() const;



};

#endif
