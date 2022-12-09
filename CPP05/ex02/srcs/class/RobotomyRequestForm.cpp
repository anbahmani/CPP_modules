/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:46:05 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/09 12:49:18 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("unnamed", 72, 45), _target("unnamed"){
	std::cout << "RobotomyRequestForm Default constructor has been called." << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target);

RobotomyRequestForm(RobotomyRequestForm &form);

~RobotomyRequestForm(void);

void execute(Bureaucrat const &Bureaucrat) const;