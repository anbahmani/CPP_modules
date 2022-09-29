/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:51:15 by abahmani          #+#    #+#             */
/*   Updated: 2022/09/29 13:26:14 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {

	private :
		std::string _type;

	public :
		Weapon(void);
		Weapon(std::string type);
		~Weapon(void);
		std::string getType(void);
		void setType(std::string type);
};

#endif