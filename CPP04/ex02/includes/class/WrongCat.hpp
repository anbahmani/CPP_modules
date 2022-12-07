/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:35:57 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/07 20:19:24 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	
		public :
		
		WrongCat(void);
		WrongCat(const WrongCat &WrongCat);
		~WrongCat(void);
		WrongCat &operator=(const WrongCat &cat);
		void makeSound(void) const;
};

#endif