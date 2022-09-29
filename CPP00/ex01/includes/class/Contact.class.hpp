/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:21:49 by abahmani          #+#    #+#             */
/*   Updated: 2022/09/28 22:57:48 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include "phonebook.hpp"

class Contact {
		private :
		
			std::string _first_name;
			std::string _last_name;
			std::string _nickname;
			std::string _phone_number;
			std::string _darkest_secret;

		public :
			
			Contact(void);
			~Contact(void);
			void setFirstName(std::string &first_name);
			void setLastName(std::string &last_name);
			void setNickName(std::string &nickname);
			void setPhoneNumber(std::string &phone_number);
			void setDarkestSecret(std::string &darkest_secret);
			std::string getFirstName(void);
			std::string getLastName(void);
			std::string getNickName(void);
			std::string getPhoneNumber(void);
			std::string getDarkestSecret(void);
			void printContact(void);
};

#endif