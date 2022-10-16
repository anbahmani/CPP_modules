/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 13:09:15 by abahmani          #+#    #+#             */
/*   Updated: 2022/10/16 18:28:48 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) {
	//std::cout << "A weapon has been created." << std::endl;
	return ;
}

Weapon::Weapon(std::string type) : _type(type) {
	//std::cout << "A weapon " << type << " has been created." << std::endl;
	return ;
}

Weapon::~Weapon(void) {
	/*if (this->_type != "")
		std::cout << "A weapon has been deleted." << std::endl;
	else
		std::cout << "A weapon " << this->_type << " has been deleted." << std::endl;*/
	return ;
}

std::string Weapon::getType(void) {
	return (this->_type);
}

void Weapon::setType(std::string type) {
	this->_type = type;
	//std::cout << "A weapon got the type " << type << "." << std::endl;
}
