/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 08:53:09 by abahmani          #+#    #+#             */
/*   Updated: 2022/10/28 14:14:36 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : virtual public Animal {
	
		public :
		
		Cat(void);
		Cat(const Cat &cat);
		virtual ~Cat(void);
		Cat &operator=(const Cat &cat);
		virtual void makeSound(void) const;
};

#endif