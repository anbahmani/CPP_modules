/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:33:00 by abahmani          #+#    #+#             */
/*   Updated: 2022/10/01 13:56:45 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _raw(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &fixed) : _raw(fixed._raw){
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int raw) : _raw(raw) {
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const float raw) : _raw(raw) {
	std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed Fixed::operator=(const Fixed& fixed){
	this->_raw = fixed._raw;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_raw);
}
		
void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_raw = raw;
}

float Fixed::toFloat(void) const {
	return ((float)this->_raw / (1 << this->_bits));
}

int Fixed::toInt(void) const {
	return (this->_raw >> this->_bits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
	return (out);
}
