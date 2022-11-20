/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 08:08:46 by abahmani          #+#    #+#             */
/*   Updated: 2022/11/20 04:48:34 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("") {
	std::cout << "Default Animal constructor has been called." << std::endl;
	return ;
}

Animal::Animal(const Animal &animal) : _type(animal._type) {
	std::cout << "Copy Animal constructor has been called." << std::endl;
}

Animal& Animal::operator=(const Animal &animal) {
	this->_type = animal._type;
	std::cout << "Animal affectation operator has been called." << std::endl;
	return (*this);
}

Animal::~Animal(void) {
	std::cout << "Animal destructor has been called." << std::endl;
	return ;
}

std::string Animal::getType(void) const {
	return (this->_type);
}

void Animal::setType(std::string type) {
	this->_type = type;
}

void Animal::makeSound(void) const {
	std::cout << "The animal makes no sound." << std::endl;
}