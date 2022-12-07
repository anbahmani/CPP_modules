/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 08:08:46 by abahmani          #+#    #+#             */
/*   Updated: 2022/11/20 04:48:34 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : _type("") {
	std::cout << "Default AAnimal constructor has been called." << std::endl;
	return ;
}

AAnimal::AAnimal(const AAnimal &animal) : _type(animal._type) {
	std::cout << "Copy AAnimal constructor has been called." << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal &animal) {
	this->_type = animal._type;
	std::cout << "AAnimal affectation operator has been called." << std::endl;
	return (*this);
}

AAnimal::~AAnimal(void) {
	std::cout << "AAnimal destructor has been called." << std::endl;
	return ;
}

std::string AAnimal::getType(void) const {
	return (this->_type);
}

void AAnimal::setType(std::string type) {
	this->_type = type;
}
