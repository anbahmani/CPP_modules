/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 09:19:16 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/10 12:38:09 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("unnamed", 145, 137), _target("unnamed"){
	std::cout << "ShrubberyCreationForm Default constructor has been called." << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("unnamed", 145, 137), _target(target) {
	std::cout << "ShrubberyCreationForm target based constructor has been called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &form) {
	std::cout << "ShrubberyCreationForm copy constructor has been called." << std::endl;
	*this = form;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &form) {
	std::cout << "ShrubberyCreationForm assignation operator has been called." << std::endl;
	this->_target = form._target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	std::cout << "ShrubberyCreationForm destructor has been called." << std::endl;
}

const char *ShrubberyCreationForm::OutputFileException::what() const throw() {
	return ("An error occured during the fie opening.");
}

void ShrubberyCreationForm::execute(Bureaucrat const &bureaucrat) const {
	if (this->checkRequirements(bureaucrat)){
		std::string filename(this->_target + "_shrubbery ");
		std::ofstream ofs(filename.c_str());
		if (ofs.fail()){
			throw ShrubberyCreationForm::OutputFileException();
			return ;
		}
		ofs << "		   &&& &&  & &&" << std::endl;
		ofs << "      && &\\/&\\|& ()|/ @, &&" << std::endl;
		ofs << "      &\\/(/&/&||/& /_/)_&/_&" << std::endl;
		ofs << "   &() &\\/&|()|/&\\/ '%\" & ()" << std::endl;
		ofs << "  &_\\_&&_\\ |& |&&/&__%_/_& &&" << std::endl;
		ofs << "&&   && & &| &| /& & % ()& /&&" << std::endl;
		ofs << " ()&_---()&\\&\\|&&-&&--%---()~" << std::endl;
		ofs << "     &&     \\|||" << std::endl;
		ofs << "             |||" << std::endl;
		ofs << "             |||" << std::endl;
		ofs << "             |||" << std::endl;
		ofs << "       , -=-~  .-^- _" << std::endl;
	}
}