/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 16:58:36 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/11 17:53:26 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef INTERN_HPP
#define INTERN_HPP

class Intern {

	private :

		Form *createPresidentialPardonForm(std::string target);
		Form *createRobotomyRequestForm(std::string target);
		Form *createShrubberyCreationForm(std::string target);

	public :
	
		Intern(void);
		Intern(Intern &intern);
		Intern &operator=(Intern &intern);
		~Intern(void);
		Form *makeForm(std::string form, std::string target);
	
};

#endif