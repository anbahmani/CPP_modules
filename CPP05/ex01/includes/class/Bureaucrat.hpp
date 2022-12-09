/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:59:44 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/08 19:50:17 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

class Bureaucrat {
	
	private :
		std::string _name;
		int	_grade;

		
	public :
		Bureaucrat(void);
		Bureaucrat(Bureaucrat& bureaucrat);
		~Bureaucrat(void);
		Bureaucrat& operator=(Bureaucrat& bureaucrat);
		Bureaucrat(std::string name, int grade);
		std::string getName(void);
		int getGrade(void);
		void upgrade(void);
		void downgrade(void);
		
		class GradeTooHighException : public std::exception{
			const char *what() const throw();
		};

		class GradeTooLowException : public std::exception{
			const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream& os, Bureaucrat& bureaucrat);
#endif