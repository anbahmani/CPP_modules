/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 03:44:47 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/17 04:16:18 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <exception>
#include <ctime>
#include <stdlib.h> 
#include <cstdlib>

Base * generate(void) {
	srand(time(NULL));
	int i = rand();

	switch (i % 3){
		case 0:
			std::cout << "A instance from class A has been generated." << std::endl;
			return (new A);
		case 1:
			std::cout << "A instance from class B has been generated." << std::endl;
			return (new B);
		case 2:
			std::cout << "A instance from class C has been generated." << std::endl;
			return (new C);
	}
	return NULL;
}

void identify(Base* p) {
	if (dynamic_cast<A *>(p))
		std::cout << "The parameter points on a instance from the class A." << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "The parameter points on a instance from the class B." << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "The parameter points on a instance from the class C." << std::endl;
	else
		std::cout << "The parameter points on a instance from an unknow class." << std::endl;
}

void identify(Base& p) {
	try {
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "The parameter is a reference of a instance from the class A." << std::endl;
		return;
	} catch (const std::exception &e){
	}
	try {
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "The parameter is a reference of a instance from the class B." << std::endl;
		return;
	} catch (const std::exception &e){
	}
	try {
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "The parameter is a reference of a instance from the class C." << std::endl;
		return;
	} catch (const std::exception &e){
	}
	std::cout << "The parameter is a reference of a instance from an unknow class." << std::endl;
}

int main (void) {
	Base *p = generate();
	Base &r = *p;

	identify(p);
	identify(r);

	delete p;
	return (0);
}