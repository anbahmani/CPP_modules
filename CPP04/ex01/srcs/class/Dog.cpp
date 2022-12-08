/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 14:16:20 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/08 18:50:54 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : _brain(new Brain()){
	std::cout << "Default Dog constructor has been called." << std::endl;
	this->_type = "Dog";
	return ;
}

Dog::Dog(const Dog &dog) : Animal(dog), _brain(new Brain(*dog._brain)) {
	std::cout << "Copy Dog constructor has been called." << std::endl;
	this->_type = dog._type;
	return ;
}

Dog	&Dog::operator=(const Dog &dog) {
	std::cout << "Dog affectation operator has been called." << std::endl;
	this->_type = dog._type;
	this->_brain = dog._brain;
	return (*this);
}

Dog::~Dog(void) {
	std::cout << "Dog destructor has been called." << std::endl;
	delete this->_brain;
	return ;
}

void	Dog::makeSound(void) const{
	std::cout << "Ouaf" << std::endl;
	return ;
}

void Dog::add_idea(std::string idea){
	std::cout << "Dog with type "<< this->_type << "has the idea : "<< idea << "." << std::endl;
	this->_brain->add_idea(idea);
}

Brain *Dog::getBrain(void) {
	return this->_brain;
}
