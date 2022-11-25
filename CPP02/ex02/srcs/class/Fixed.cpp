/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:33:00 by abahmani          #+#    #+#             */
/*   Updated: 2022/11/22 10:02:58 by abahmani         ###   ########.fr       */
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

Fixed::Fixed(const float raw) : _raw(std::roundf(raw * (1 << this->_bits))) {
	std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed &Fixed::operator=(const Fixed& fixed){
	this->_raw = fixed._raw;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

bool Fixed::operator>(const Fixed& fixed) const {
		return (this->_raw > fixed._raw);
}

bool Fixed::operator>=(const Fixed& fixed) const {
		return (this->_raw >= fixed._raw);
}

bool Fixed::operator<(const Fixed& fixed) const {
		return (this->_raw < fixed._raw);
}

bool Fixed::operator<=(const Fixed& fixed) const {
		return (this->_raw <= fixed._raw);
}

bool Fixed::operator==(const Fixed& fixed) const {
		return (this->_raw == fixed._raw);
}

bool Fixed::operator!=(const Fixed& fixed) const {
		return (this->_raw != fixed._raw);
}

Fixed Fixed::operator+(const Fixed&fixed) const {
	return (Fixed(this->toFloat() + fixed.toFloat()));
}
		
Fixed Fixed::operator-(const Fixed&fixed) const {
	return (Fixed(this->toFloat() - fixed.toFloat()));
}

Fixed Fixed::operator*(const Fixed&fixed) const {
	return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed Fixed::operator/(const Fixed&fixed) const {
	/*if (fixed.toInt() == 0)
	{
		std::cout << "Error : cannot divise by 0." << std::endl;
		return (Fixed());
	}*/
	return (Fixed(this->toFloat() / fixed.toFloat()));
}

Fixed& Fixed::operator++(void) {
	this->_raw++;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed tmp(*this);

    this->_raw++;
    return (tmp);
}

Fixed& Fixed::operator--(void) {
	this->_raw--;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed tmp(*this);

    this->_raw--;
    return (tmp);
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

Fixed &Fixed::min(Fixed &f1, Fixed &f2) {
	if (f1 < f2)
		return (f1);
	return (f2);
}

const Fixed &Fixed::min(const Fixed&f1, const Fixed&f2) {
	if (f1 < f2)
		return (f1);
	return (f2);
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2) {
	if (f1 > f2)
		return (f1);
	return (f2);
}

const Fixed &Fixed::max(const Fixed&f1, const Fixed&f2){
	if (f1 > f2)
		return (f1);
	return (f2);
}
