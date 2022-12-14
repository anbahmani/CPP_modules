/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:10:34 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/11 18:14:15 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Bureaucrat::Bureaucrat(void) : _name("unname"), _grade(150) {
	std::cout << "Bureaucrat Default constructor has been called." << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat& bureaucrat) {
	std::cout << "Bureaucrat copy Bureaucrat has been called to create" << this->_name <<std::endl;
	*this = bureaucrat;
	return ;
}

Bureaucrat::~Bureaucrat(void) {
	std::cout << "Bureaucrat destructor has been called to destroy : " << this->_name << std::endl;
	return ;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat& bureaucrat) {
	std::cout << "Bureaucrat assignation operator has been called." << std::endl;
	this->_grade = bureaucrat._grade;
	return (*this);
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else {
		this->_grade = grade;
		std::cout << "bureaucrat name and grade based constructor has been called to create : " << this->_name << std::endl;
	}
	return ;
}

std::string Bureaucrat::getName(void) const {
	return this->_name;
}

int Bureaucrat::getGrade(void) const {
	return this->_grade;
}

void Bureaucrat::upgrade(void) {
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else{
		this->_grade--;
		std::cout << this->_name << "has been upgraded from " << this->_grade + 1 << " to " << this->_grade<<std::endl;
	}
}

void Bureaucrat::downgrade(void) {
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else{
		this->_grade++;
		std::cout << this->_name << "has been downgraded from " << this->_grade - 1 << " to " << this->_grade<<std::endl;
	}
}

void Bureaucrat::executeForm(Form const &form) {
	try {
		form.execute(*this);
	}catch(const std::exception &e) {
		std::cerr << "The bureaucrat " << this->_name << " cannot execute the form " << form.getName() << std::endl;
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade too low");
}

void Bureaucrat::signForm(Form &form) {
	try {
		form.beSigned(*this);
	} catch(const std::exception &e){
		std::cerr << "The bureaucrat " << this->_name << " cannot sign the form " << form.getName() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &bureaucrat) {
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "." << std::endl;
	return out;
}