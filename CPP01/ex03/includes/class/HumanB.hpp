/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:54:23 by abahmani          #+#    #+#             */
/*   Updated: 2022/10/16 18:37:59 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB{
	
	private :
		std::string _name;
		Weapon *_weapon;
	
	public :
		HumanB(std::string name);
		~HumanB(void);
		void setWeapon(Weapon &weapon);
		void attack(void);
};

#endif