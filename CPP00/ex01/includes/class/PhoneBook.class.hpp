/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:21:51 by abahmani          #+#    #+#             */
/*   Updated: 2022/09/28 23:19:34 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "phonebook.hpp"

class PhoneBook {
		private :

			int	_nb_instance;
			Contact contacts[8];
			int _index;

		public :

			PhoneBook(void);
			~PhoneBook(void);
			void addContact(void);
			void searchContact(void);
			void displayContacts(void);
};

#endif