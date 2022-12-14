/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:52:46 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/08 20:35:57 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void){
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
	
	return (0);
}