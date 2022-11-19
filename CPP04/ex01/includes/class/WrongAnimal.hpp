/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:32:20 by abahmani          #+#    #+#             */
/*   Updated: 2022/10/31 14:08:16 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {

	protected :
		
		std::string _type;

	public :

	WrongAnimal(void);
	WrongAnimal(const WrongAnimal &wrongAnimal);
	WrongAnimal &operator=(WrongAnimal &wrongAnimal);
	~WrongAnimal(void);
	std::string getType(void) const;
	void makeSound(void) const;	
};

#endif