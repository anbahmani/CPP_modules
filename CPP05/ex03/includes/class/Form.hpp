/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 20:10:29 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/11 18:10:43 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <time.h>
# include <cstdlib>
# include <unistd.h>
# include <iostream>
# include <exception>
# include <fstream>
# include <string>

class Bureaucrat;

class Form {
	
	private :

		std::string const _name;
		bool _signed;
		int const _grade_sign;
		int const _grade_execute;

	public :
	
		Form(void);
		Form(Form &form);
		Form(std::string name, int grade_sign, int grade_execute);
		virtual ~Form(void);
		Form &operator=(Form &form);
		std::string getName(void) const;
		bool getSigned(void) const;
		int getGradeSign(void) const;
		int getGradeExecute(void) const;
		void beSigned(Bureaucrat &bureaucrat);
		virtual void execute(Bureaucrat const &bureaucrat) const = 0;
		bool checkRequirements(Bureaucrat const &bureaucrat) const;

		class GradeTooHighException : public std::exception{
				const char *what() const throw();
		};

		class GradeTooLowException : public std::exception{
			const char *what() const throw();
		};
		
		class FormNotSigned : public std::exception{
			const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, Form &form);

# include "Intern.hpp"
# include "Form.hpp"
# include "Bureaucrat.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
#endif