/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:28:39 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/10 12:21:49 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

class ShrubberyCreationForm : public Form{
	private :

		std::string _target;
		ShrubberyCreationForm(void);
		
	public :
	
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm &form);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm &form);
		~ShrubberyCreationForm(void);
		void execute(Bureaucrat const &bureaucrat) const;
		class OutputFileException : public std::exception {
			const char *what(void) const throw();
		};
};

#endif