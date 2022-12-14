/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 20:19:22 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/10 14:41:00 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("unname"), _signed(false), _grade_sign(150), _grade_execute(150) {
	std::cout << "Form Default constructor has been called." << std::endl;
	return ;
}

Form::Form(Form &form) : _name(form._name), _signed(false), _grade_sign(form._grade_sign), _grade_execute(form._grade_execute) {
	std::cout << "Form copy Form has been called to create" << this->_name <<std::endl;
	return ;
}

Form::Form(std::string name, int grade_sign, int grade_execute) : _name(name), _signed(false), _grade_sign(grade_sign) ,_grade_execute(grade_execute){
	std::cout << "Form name and grades based constructor has been called to create : " << this->_name << std::endl;
	if (this->_grade_sign < 1 || this->_grade_execute < 1)
		throw Form::GradeTooHighException();
	else if (this->_grade_sign > 150 || this->_grade_execute > 150)
		throw Form::GradeTooLowException();
}

Form::~Form(void) {
	std::cout << "Form destructor has been called to destroy : " << this->_name << std::endl;
	return ;
}

Form &Form::operator=(Form &form) {
	std::cout << "Form assignation operator has been called." << std::endl;
	(void)form;
	return (*this);
}

std::string Form::getName(void) const {
	return this->_name;
}

bool Form::getSigned(void) const {
	return this->_signed;
}
	
int Form::getGradeSign(void) const {
	return this->_grade_sign;
}

int Form::getGradeExecute(void) const {
	return this->_grade_execute;
}

const char *Form::GradeTooHighException::what() const throw() {
	return ("Grade too high");
}

const char *Form::GradeTooLowException::what() const throw() {
	return ("Grade too low");
}

void Form::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > this->_grade_sign) {
		std::cout << bureaucrat.getName() << " couldn\'t sign " << this->_name << " because his grade is too low." << std::endl;
		throw Form::GradeTooLowException();
	}
	else{
		this->_signed = true;
		std::cout << bureaucrat.getName() << " signed " << this->_name << std::endl;
	}
}
