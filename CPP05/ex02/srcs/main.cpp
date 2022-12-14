/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:52:46 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/10 12:35:55 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes.hpp"

int main(void){

	std::cout << "----------------------------------Tests from ex00----------------------------------" << std::endl;
	
	std::cout << std::endl;
	
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

std::cout << std::endl;

	try {
		Bureaucrat b3("Boss", 1);
		std::cout << b3;
		b3.upgrade();
	}catch (std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	
	try {
		Bureaucrat b4("Employee", 150);
		std::cout << b4;
	}catch (std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	
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
	
	std::cout << std::endl;
	
	try {
		Bureaucrat b6("Wrong low grade", 151);
		std::cout << b6;
	}catch (std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	
	try {
		Bureaucrat b7("Wrong high grade", 0);
		std::cout << b7;
	}catch (std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	
	//std::cout << "----------------------------------Tests from ex01----------------------------------" << std::endl;
	
	std::cout << std::endl;
	/*
	try {
		Bureaucrat b8("Boss", 1);
		Form f1("Low form", 1, 1);
		f1.beSigned(b8);
	}catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat b9("Employee", 150);
		Form f2("Low form", 150, 150);
		f2.beSigned(b9);
	}catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat b10("Middle", 75);
		Form f3("Middle form", 75, 75);
		f3.beSigned(b10);
	}catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat b11("Random", 90);
		Form f4("Random form", 100, 100);
		f4.beSigned(b11);
	}catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat b11("Random", 50);
		Form f4("High form", 5, 5);
		f4.beSigned(b11);
	}catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	
		std::cout << std::endl;
	
	try {
		Bureaucrat b11("Employee", 140);
		Form f4("Middle form", 75, 75);
		f4.beSigned(b11);
	}catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	*/


	std::cout << "----------------------------------New tests----------------------------------" << std::endl;

	std::cout << std::endl;
	
	std::cout << "***************************RobotomyrequestForm tests***************************" << std::endl;

	std::cout << std::endl;

	try {
		Bureaucrat b12("Boss", 1);
		RobotomyRequestForm r1(b12.getName());
		r1.beSigned(b12);
		r1.execute(b12);
	}catch(std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat b13("Employee", 150);
		RobotomyRequestForm r2(b13.getName());
		r2.execute(b13);
	}catch(std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat b14("Middle", 45);
		RobotomyRequestForm r3(b14.getName());
		r3.execute(b14);
	}catch(std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat b14("Middle", 46);
		RobotomyRequestForm r4(b14.getName());
		r4.beSigned(b14);
		b14.executeForm(r4);
	}catch(std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	
	std::cout << "***************************ShrubberyCreationForm tests***************************" << std::endl;

	std::cout << std::endl;

	try {
		Bureaucrat b15("Boss", 1);
		ShrubberyCreationForm s1(b15.getName());
		s1.beSigned(b15);
		s1.execute(b15);
	}catch(std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat b16("Employee", 150);
		ShrubberyCreationForm s2(b16.getName());
		s2.execute(b16);
	}catch(std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat b17("Middle", 45);
		ShrubberyCreationForm s3(b17.getName());
		s3.execute(b17);
	}catch(std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat b18("Middle", 46);
		ShrubberyCreationForm s4(b18.getName());
		s4.beSigned(b18);
		b18.executeForm(s4);
	}catch(std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	
	std::cout << "***************************PresidentialPardonForm tests***************************" << std::endl;
	
	std::cout << std::endl;
	
	try {
		Bureaucrat b19("Boss", 1);
		PresidentialPardonForm p1(b19.getName());
		p1.beSigned(b19);
		p1.execute(b19);
	}catch(std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat b20("Employee", 150);
		PresidentialPardonForm p2(b20.getName());
		p2.execute(b20);
	}catch(std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat b21("Middle", 45);
		PresidentialPardonForm p3(b21.getName());
		p3.execute(b21);
	}catch(std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat b22("Middle", 46);
		PresidentialPardonForm p4(b22.getName());
		p4.beSigned(b22);
		b22.executeForm(p4);
	}catch(std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}