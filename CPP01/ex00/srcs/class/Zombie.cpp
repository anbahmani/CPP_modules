/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 10:55:33 by abahmani          #+#    #+#             */
/*   Updated: 2022/09/29 11:06:00 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) : _name("") {
	std::cout << "A zombie has been created." << std::endl;
	return ;
}

Zombie::~Zombie(void) {
	std::cout << this->_name << " has been deleted." << std::endl;
	return ;
}

Zombie::Zombie(std::string name) : _name(name) {
	std::cout << "The zombie "<< this->_name <<" has been created." << std::endl;
}

void Zombie::announce(void) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
	this->_name = name;
	std::cout << "A zombie get name " << name <<"." << std::endl;
}