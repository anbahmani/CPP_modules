/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 09:19:11 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/10 12:14:41 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("unnamed", 25, 5), _target("unnamed"){
	std::cout << "PresidentialPardonForm Default constructor has been called." << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("unnamed", 25, 5), _target(target) {
	std::cout << "PresidentialPardonForm target based constructor has been called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &form) {
	std::cout << "PresidentialPardonForm copy constructor has been called." << std::endl;
	*this = form;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &form) {
	std::cout << "PresidentialPardonForm assignation operator has been called." << std::endl;
	this->_target = form._target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
	std::cout << "PresidentialPardonForm destructor has been called." << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const &bureaucrat) const {
	if (this->checkRequirements(bureaucrat)){
		std::cout << this->_target << " was forgiven by Zaphod Beeblebrox." << std::endl;
	}
}