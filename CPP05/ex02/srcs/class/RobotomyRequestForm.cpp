/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:46:05 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/10 05:51:08 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("unnamed", 72, 45), _target("unnamed"){
	std::cout << "RobotomyRequestForm Default constructor has been called." << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("unnamed", 72, 45), _target(target) {
	std::cout << "RobotomyRequestForm target based constructor has been called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &form) {
	std::cout << "RobotomyRequestForm copy constructor has been called." << std::endl;
	*this = form;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &form) {
	std::cout << "RobotomyRequestForm assignation operator has been called." << std::endl;
	this->_target = form._target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	std::cout << "RobotomyRequestForm destructor has been called." << std::endl;
}

const char *RobotomyRequestForm::NotRobotomised::what() const throw() {
	return ("The operation failed.");
}

void RobotomyRequestForm::execute(Bureaucrat const &bureaucrat) const {
	if (this->checkRequirements(bureaucrat)){
		srand(time(NULL));
		int r = rand();
		if (r % 2){
			std::cout << "*drill noise*" << std::endl;
			std::cout << this->_target << " has been robotomised successfully !" << std::endl;
		}
		else {
			throw RobotomyRequestForm::NotRobotomised();
		}
	}
}