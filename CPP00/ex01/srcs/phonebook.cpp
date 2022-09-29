/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:22:02 by abahmani          #+#    #+#             */
/*   Updated: 2022/09/29 08:51:06 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"


int main(void) {
	PhoneBook phonebook;
	std::string choice;
	
	while (1) {
		std::cout << "Enter your choice between :  ADD, SEARCH and EXIT." << std::endl;
		std::getline(std::cin, choice);
		if (choice == "ADD") {
			phonebook.addContact();
		}
		else if (choice == "SEARCH") {
			phonebook.displayContacts();
			phonebook.searchContact();
		}
		else if (choice == "EXIT")
			break ;
	}
	return (0);
}
