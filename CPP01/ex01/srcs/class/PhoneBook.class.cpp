/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:21:59 by abahmani          #+#    #+#             */
/*   Updated: 2022/09/29 08:51:53 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void) : _nb_instance(0), _index(0) {
	return ;
}

PhoneBook::~PhoneBook(void) {
	return ;
}

void PhoneBook::addContact(void) {
	int i;
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;

	if (this->_nb_instance >= 8) {
		if (this->_index == 8)
			this->_index = 0;
		i = this->_index++;
	} 
	else
		i = this->_nb_instance++;
	
	std::cout << "Enter the contact first name :" << std::endl;
	std::getline(std::cin, first_name);
	this->contacts[i].setFirstName(first_name);
	std::cout << "Enter the contact last name :" << std::endl;
	std::getline(std::cin, last_name);
	this->contacts[i].setLastName(last_name);
	std::cout << "Enter the contact nickname :" << std::endl;
	std::getline(std::cin, nick_name);
	this->contacts[i].setNickName(nick_name);
	std::cout << "Enter the contact phone number :" << std::endl;
	std::getline(std::cin, phone_number);
	this->contacts[i].setPhoneNumber(phone_number);
	std::cout << "Enter the contact darkest secret :" << std::endl;
	std::getline(std::cin, darkest_secret);
	this->contacts[i].setDarkestSecret(darkest_secret);
	std::cout << "The contact has been added successfully !" << std::endl;
}


void PhoneBook::searchContact(void) {
	int index = 0;
	std::string input;
	std::cout << "Enter the index of the contact that you want to search." << std::endl;
	std::getline(std::cin, input);
	for (unsigned int i = 0; i < input.length(); i++) {
        if (std::isdigit(input.at(i)) == 0){
			std::cout << "The index is in a bad format." << std::endl;
			return ;
		}
    }
	if (input.length() >= 2 || input.length() < 1 || (int)input.at(0) - '0' >= this->_nb_instance)
	{
		std::cout << "The index does not exist." << std::endl;
		return ;
	}
	index = (int)input.at(0) - '0';
	std::cout << "First name : " << this->contacts[index].getFirstName() << std::endl;
	std::cout << "Last name : " << this->contacts[index].getLastName() << std::endl;
	std::cout << "Nickname : " << this->contacts[index].getNickName() << std::endl;
	std::cout << "Phone number : " << this->contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret : " << this->contacts[index].getDarkestSecret() << std::endl;
}

void PhoneBook::displayContacts(void) {
	std::cout << "     index";
	std::cout << "|" << "first name";
	std::cout << "|" << " last name";
	std::cout << "|" << "  nickname";
	std::cout << std::endl;
	for (int i = 0; i < this->_nb_instance; i++) {
		std::cout << "         " << i;
		std::cout << "|";
		if (contacts[i].getFirstName().length() > 10)
			std::cout << contacts[i].getFirstName().substr(0, 9).append(".") << "|";
		else
			std::cout << std::setfill (' ') << std::setw (10) << contacts[i].getFirstName() << "|";
		if (contacts[i].getLastName().length() > 10)
			std::cout << contacts[i].getLastName().substr(0, 9).append(".") << "|";
		else
			std::cout << std::setfill (' ') << std::setw (10) << contacts[i].getLastName() << "|";
		if (contacts[i].getNickName().length() > 10)
			std::cout << contacts[i].getNickName().substr(0, 9).append(".") << std::endl;
		else
			std::cout << std::setfill (' ') << std::setw (10) << contacts[i].getNickName() << std::endl;
	}
}
