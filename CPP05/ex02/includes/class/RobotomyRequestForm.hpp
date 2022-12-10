/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:27:59 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/10 06:08:58 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

# include "Includes.hpp"

class RobotomyRequestForm : public Form {
	
	private :

		std::string _target;
		RobotomyRequestForm(void);
		
	public :
	
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm &form);
		RobotomyRequestForm &operator=(RobotomyRequestForm &form);
		~RobotomyRequestForm(void);
		void execute(Bureaucrat const &bureaucrat) const;
		class NotRobotomised : public std::exception {
			const char *what(void) const throw();
		};
};

#endif