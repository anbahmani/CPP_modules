/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:59:44 by abahmani          #+#    #+#             */
/*   Updated: 2022/11/08 10:08:31 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat {
	
	private :
		std::string _name;
		int	_grade;

		Bureaucrat(void);
		
	public :
		Bureaucrat(Bureaucrat& bureaucrat);
		~Bureaucrat(void);
		Bureaucrat& operator=(Bureaucrat& bureaucrat);
		Bureaucrat(std::string name, int grade);
		std::string getName(void);
		int getGrade(void);
		void upgrade(void);
		void downgrade(void);
};

#endif