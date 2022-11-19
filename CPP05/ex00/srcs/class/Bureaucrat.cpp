/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:10:34 by abahmani          #+#    #+#             */
/*   Updated: 2022/11/08 11:28:15 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name(""), _grade(150) {
	std::cout << "Bureaucrat Default constructor has been called." << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat& bureaucrat) : _name(bureaucrat._name), _grade(bureaucrat._grade) {
	std::cout << "Bureaucrat copy Bureaucrat has been called to create" << this->_name <<std::endl;
	return ;
}

Bureaucrat::~Bureaucrat(void) {
	std::cout << "Bureaucrat destructor has been called to destroy : " << this->_name << std::endl;
	return ;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat& bureaucrat) {
	std::cout << "Bureaucrat assignation operator has been called." << std::endl;
	this->_name = bureaucrat._name;
	this->_grade = bureaucrat._grade;
	return (*this);
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	std::cout << "bureaucrat name and grade based constructor has been called to create : " << this->_name << std::endl;
	return ;
}

std::string Bureaucrat::getName(void) {
	return this->_name;
}

int Bureaucrat::getGrade(void) {
	return this->_grade;
}

void Bureaucrat::upgrade(void) {
	this->_grade--;
	std::cout << this->_name << "has been upgraded from " << this->_grade + 1 << " to " << this->_grade<<std::endl;
}

void Bureaucrat::downgrade(void) {
	this->_grade++;
	std::cout << this->_name << "has been downgraded from " << this->_grade - 1 << " to " << this->_grade<<std::endl;
}