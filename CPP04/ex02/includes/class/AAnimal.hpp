/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 07:48:46 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/07 19:57:45 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
# define AAnimal_HPP

# include <iostream>

class AAnimal {
	
	protected :

		std::string _type;

	public :

		AAnimal(void);
		AAnimal(const AAnimal &AAnimal);
		AAnimal &operator=(const AAnimal &AAnimal);
		virtual ~AAnimal(void);
		std::string getType(void) const;
		void setType(std::string type);
		virtual void makeSound(void) const = 0;
};

#endif