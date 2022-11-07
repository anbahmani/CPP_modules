/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:09:44 by abahmani          #+#    #+#             */
/*   Updated: 2022/11/07 12:11:09 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("") {
	std::cout << "Default WrongAnimal constructor has been called." << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal) : _type(wrongAnimal._type) {
	std::cout << "Copy WrongAnimal constructor has been called." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal &wrongAnimal) {
	this->_type = wrongAnimal._type;
	std::cout << "WrongAnimal affectation operator has been called." << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal destructor has been called." << std::endl;
	return ;
}

std::string WrongAnimal::getType(void) const {
	return (this->_type);
}

void WrongAnimal::makeSound(void) const {
	std::cout << "The wrongAnimal makes no sound." << std::endl;
}