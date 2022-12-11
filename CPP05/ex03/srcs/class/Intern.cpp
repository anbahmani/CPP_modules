/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:05:07 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/11 17:57:41 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

Intern::Intern(void) {
	std::cout << "Intern Default constructor has been called." << std::endl;
}

Intern::Intern(Intern &intern) {
	(void)intern;
	std::cout << "Intern copy constructor has been called." << std::endl;
}

Intern &Intern::operator=(Intern &intern) {
	(void)intern;
	std::cout << "Intern assignation operator has been called." << std::endl;
	return (*this);
}

Intern::~Intern(void) {
	std::cout << "Intern destructor has been called." << std::endl;
}

Form *Intern::createPresidentialPardonForm(std::string target) {
	return new PresidentialPardonForm(target);
}

Form *Intern::createRobotomyRequestForm(std::string target) {
	return new RobotomyRequestForm(target);
}

Form *Intern::createShrubberyCreationForm(std::string target) {
	return new ShrubberyCreationForm(target);
}

Form *Intern::makeForm(std::string form, std::string target){
	Form* (Intern::*methods[3])(std::string ) = {
		&Intern::createRobotomyRequestForm,
		&Intern::createPresidentialPardonForm,
		&Intern::createShrubberyCreationForm
		};
	std::string forms[3] = {
		"robotomy request",
		"presidential pardon",
		"shrubbery creation"
		};
	for (int i = 0; i < 3; i++){
		if (!form.compare(forms[i])){
			std::cout << "The intern creates the "<< form <<"." << std::endl;
			return (this->*(methods[i]))(target);
		}
	}  
	std::cout <<"The intern cannot create"<< "\"" << form <<"\"." <<std::endl;
	std::cout << "The intern can only creat the following forms :" << std::endl;
	for (int j = 0; j < 3; j++){
		std::cout << "- " << forms[j] << ";" << std::endl;
	}
	return (NULL);
}