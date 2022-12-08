/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 08:53:09 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/08 18:50:44 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : virtual public Animal {
	
		private :
			Brain *_brain;

		public :
		
		Cat(void);
		Cat(const Cat &cat);
		virtual ~Cat(void);
		Cat &operator=(const Cat &cat);
		virtual void makeSound(void) const;
		void add_idea(std::string idea);
		Brain *getBrain(void);
};

#endif