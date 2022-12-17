/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 07:07:48 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/17 16:57:51 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int main(void) {
	// int i1 = 1;
	// int i2 = 2;

	// std::cout << "******************************Tests with int variables*******************************" << std::endl;
	// std::cout << "------------Initial value before swap------------" << std::endl;
	// std::cout << "i1 = " << i1 << std::endl;
	// std::cout << "i2 = " << i2 << std::endl;
	// std::cout << "min value between i1 value and i2 value before swap: \"" << ::min(i1, i2) << "\" from " << ((i1 == ::min(i1, i2)) ? "i1" : "i2") << std::endl;
	// std::cout << "max value between i1 value and i2 value before swap: \"" << ::max(i1, i2) << "\" from " << ((i1 == ::max(i1, i2)) ? "i1" : "i2") << std::endl;
	// ::swap(i1, i2);
	// std::cout << "------------Value after swap------------" << std::endl;
	// std::cout << "i1 = " << i1 << std::endl;
	// std::cout << "i2 = " << i2 << std::endl;
	// std::cout << "min value between i1 value and i2 value before swap: \"" << ::min(i1, i2) << "\" from " << ((i1 == ::min(i1, i2)) ? "i1" : "i2") << std::endl;
	// std::cout << "max value between i1 value and i2 value before swap: \"" << ::max(i1, i2) << "\" from " << ((i1 == ::max(i1, i2)) ? "i1" : "i2") << std::endl;

	// std::string s1 = "s1";
	// std::string s2 = "s2";
	// std::cout << std::endl;
	// std::cout << "******************************Tests with string variables*******************************" << std::endl;
	// std::cout << "------------Initial value before swap------------" << std::endl;
	// std::cout << "s1 = \"" << s1 << "\"" << std::endl;
	// std::cout << "s2 = \"" << s2 << "\"" << std::endl;
	// std::cout << "min value between s1 value and s2 value before swap: \"" << ::min(s1, s2) << "\" from " << ((s1 == ::min(s1, s2)) ? "s1" : "s2")  << std::endl;
	// std::cout << "max value between s1 value and s2 value before swap: \"" << ::max(s1, s2) << "\" from " << ((s1 == ::max(s1, s2)) ? "s1" : "s2") << std::endl;
	// ::swap(s1, s2);
	// std::cout << "------------Value after swap------------" << std::endl;
	// std::cout << "s1 = \"" << s1 << "\"" << std::endl;
	// std::cout << "s2 = \"" << s2 << "\"" << std::endl;
	// std::cout << "min value between s1 value and s2 value before swap: \"" << ::min(s1, s2) << "\" from " << ((s1 == ::min(s1, s2)) ? "s1" : "s2") << std::endl;
	// std::cout << "max value between s1 value and s2 value before swap: \"" << ::max(s1, s2) << "\" from " << ((s1 == ::max(s1, s2)) ? "s1" : "s2") << std::endl;

	// Tests from subject
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return (0);

}