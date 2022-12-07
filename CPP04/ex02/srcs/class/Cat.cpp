/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 09:12:47 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/07 19:59:59 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : _brain(new Brain()){
	std::cout << "Default Cat constructor has been called." << std::endl;
	this->_type = "Cat";
	return ;
}

Cat::Cat(const Cat &cat) : AAnimal(cat), _brain(new Brain(*cat._brain)) {
	std::cout << "Copy Cat constructor has been called." << std::endl;
	this->_type = cat._type;
	return ;
}

Cat	&Cat::operator=(const Cat &cat) {
	std::cout << "Cat affectation operator has been called." << std::endl;
	this->_type = cat._type;
	this->_brain = cat._brain;
	return (*this);
}

Cat::~Cat(void) {
	std::cout << "Cat destructor has been called." << std::endl;
	delete this->_brain;
	return ;
}

void	Cat::makeSound(void) const{
	std::cout << "Miaou" << std::endl;
	return ;
}

void Cat::add_idea(std::string idea){
	std::cout << "Cat with type "<< this->_type << "has the idea : "<< idea << "." << std::endl;
	this->_brain->add_idea(idea);
}

void Cat::print_ideas(void){
	this->_brain->print_ideas();
}