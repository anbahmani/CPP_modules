/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:11:48 by abahmani          #+#    #+#             */
/*   Updated: 2022/11/07 12:14:31 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
	std::cout << "Default WrongCat constructor has been called." << std::endl;
	this->_type = "Cat";
	return ;
}

WrongCat::WrongCat(const WrongCat &cat) : WrongAnimal(cat) {
	std::cout << "Copy WrongCat constructor has been called." << std::endl;
	this->_type = cat._type;
	return ;
}

WrongCat	&WrongCat::operator=(const WrongCat &wrongCat) {
	this->_type = wrongCat._type;
	std::cout << "WrongCat affectation operator has been called." << std::endl;
	return (*this);
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat destructor has been called." << std::endl;
	return ;
}

void	WrongCat::makeSound(void) const{
	std::cout << "Wrong Miaou" << std::endl;
	return ;
}
