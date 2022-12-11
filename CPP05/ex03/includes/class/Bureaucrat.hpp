/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:59:44 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/10 14:56:07 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

class Form;

class Bureaucrat {
	
	private :
		std::string const _name;
		int	_grade;

		
	public :
		Bureaucrat(void);
		Bureaucrat(Bureaucrat& bureaucrat);
		~Bureaucrat(void);
		Bureaucrat& operator=(Bureaucrat& bureaucrat);
		Bureaucrat(std::string name, int grade);
		std::string getName(void) const;
		int getGrade(void) const;
		void upgrade(void);
		void downgrade(void);
		void executeForm(Form const & form);
		void signForm(Form &form);
		
		class GradeTooHighException : public std::exception{
			const char *what() const throw();
		};

		class GradeTooLowException : public std::exception{
			const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream& os, Bureaucrat& bureaucrat);
#endif