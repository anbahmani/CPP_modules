/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:52:46 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/08 21:03:26 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void){

	std::cout << "----------------------------------Tests from ex00----------------------------------" << std::endl;
	try {
		Bureaucrat b1;
		Bureaucrat b2(b1);
		std::cout << b1;
		std::cout << b2;
		b2.upgrade();
		b1.downgrade();
	}catch (std::exception& e){
		std::cerr << e.what() << std::endl;
	}

	try {
		Bureaucrat b3("Boss", 1);
		std::cout << b3;
		b3.upgrade();
	}catch (std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	
	try {
		Bureaucrat b4("Employee", 150);
		std::cout << b4;
	}catch (std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	
	try {
		Bureaucrat b5("Middle",75);
		std::cout << b5;
		b5.downgrade();
		b5.upgrade();
		b5.upgrade();
		std::cout << b5;
	}catch (std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	
	try {
		Bureaucrat b6("Wrong low grade", 151);
		std::cout << b6;
	}catch (std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	
	try {
		Bureaucrat b7("Wrong high grade", 0);
		std::cout << b7;
	}catch (std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << "----------------------------------New tests----------------------------------" << std::endl;
	
	try {
		Bureaucrat b8("Boss", 1);
		Form f1("Low form", 1, 1);
		f1.beSigned(b8);
	}catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	try {
		Bureaucrat b9("Employee", 150);
		Form f2("Low form", 150, 150);
		f2.beSigned(b9);
	}catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	try {
		Bureaucrat b10("Middle", 75);
		Form f3("Middle form", 75, 75);
		f3.beSigned(b10);
	}catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	try {
		Bureaucrat b11("Random", 90);
		Form f4("Random form", 100, 100);
		f4.beSigned(b11);
	}catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	try {
		Bureaucrat b11("Boss", 90);
		Form f4("Random form", 100, 100);
		f4.beSigned(b11);
	}catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}