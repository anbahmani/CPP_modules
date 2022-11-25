/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:33:12 by abahmani          #+#    #+#             */
/*   Updated: 2022/11/22 10:06:46 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << "a = " << a << std::endl;
	std::cout << "a = " << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "max(a,b) = " << Fixed::max( (const Fixed)a, b ) << std::endl;
	return 0;
}