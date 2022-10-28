/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 14:16:20 by abahmani          #+#    #+#             */
/*   Updated: 2022/10/28 14:18:56 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
	std::cout << "Default Dog constructor has been called." << std::endl;
	this->_type = "Dog";
	return ;
}

Dog::Dog(const Dog &dog) : Animal(dog) {
	std::cout << "Copy Dog constructor has been called." << std::endl;
	this->_type = dog._type;
	return ;
}

Dog	&Dog::operator=(const Dog &dog) {
	this->_type = dog._type;
	std::cout << "Dog affectation operator has been called." << std::endl;
	return (*this);
}

Dog::~Dog(void) {
	std::cout << "Dog destructor has been called." << std::endl;
	return ;
}

void	Dog::makeSound(void) const{
	std::cout << "Ouaf" << std::endl;
	return ;
}
