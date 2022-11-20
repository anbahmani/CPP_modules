/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:33:00 by abahmani          #+#    #+#             */
/*   Updated: 2022/11/20 17:52:28 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _raw(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &fixed){
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
	return ;
}

Fixed::Fixed(const int raw) : _raw(raw << this->_bits) {
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const float raw) : _raw(roundf(raw * (1 << this->_bits))) {
	std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed &Fixed::operator=(const Fixed& fixed){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
		this->_raw = fixed._raw;
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
