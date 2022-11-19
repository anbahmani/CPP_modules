/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 14:14:05 by abahmani          #+#    #+#             */
/*   Updated: 2022/10/28 14:16:00 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public virtual Animal {
	
	public :
		
		Dog(void);
		Dog(const Dog &dog);
		virtual ~Dog(void);
		Dog &operator=(const Dog &dog);
		virtual void makeSound(void) const;
};

#endif