/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:26:57 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/10 12:13:19 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

class PresidentialPardonForm : public Form {
	
	private :

		std::string _target;
		PresidentialPardonForm(void);
		
	public :
	
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm &form);
		PresidentialPardonForm &operator=(PresidentialPardonForm &form);
		~PresidentialPardonForm(void);
		void execute(Bureaucrat const &bureaucrat) const;

};

#endif