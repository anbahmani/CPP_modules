/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 14:14:05 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/07 19:59:59 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public virtual AAnimal {
	
	private :
			Brain *_brain;
	
	public :
		
		Dog(void);
		Dog(const Dog &dog);
		virtual ~Dog(void);
		Dog &operator=(const Dog &dog);
		virtual void makeSound(void) const;
		void add_idea(std::string idea);
		void print_ideas(void);
};

#endif