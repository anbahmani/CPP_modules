/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 09:12:47 by abahmani          #+#    #+#             */
/*   Updated: 2022/10/28 09:20:37 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
	std::cout << "Default Cat constructor has been called." << std::endl;
	this->_type = "Cat";
	return ;
}

Cat::Cat(const Cat &cat) : Animal(cat) {
	std::cout << "Copy Cat constructor has been called." << std::endl;
	this->_type = cat._type;
	return ;
}

Cat	&Cat::operator=(const Cat &cat) {
	this->_type = cat._type;
	std::cout << "Cat affectation operator has been called." << std::endl;
	return (*this);
}

Cat::~Cat(void) {
	std::cout << "Cat destructor has been called." << std::endl;
	return ;
}

void	Cat::makeSound(void) const{
	std::cout << "Miaou" << std::endl;
	return ;
}
