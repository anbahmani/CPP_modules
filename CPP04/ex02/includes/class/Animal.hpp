/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 07:48:46 by abahmani          #+#    #+#             */
/*   Updated: 2022/11/20 04:48:03 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {
	
	protected :

		std::string _type;

	public :

		Animal(void);
		Animal(const Animal &animal);
		Animal &operator=(const Animal &animal);
		virtual ~Animal(void);
		std::string getType(void) const;
		void setType(std::string type);
		virtual void makeSound(void) const;
};

#endif