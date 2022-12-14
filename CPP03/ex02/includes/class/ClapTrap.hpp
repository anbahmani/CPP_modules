/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:31:42 by abahmani          #+#    #+#             */
/*   Updated: 2022/11/28 19:10:08 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
	
	protected :
		std::string _name;
		unsigned int _hit_points;
		unsigned int _energy_points;
		unsigned int _attack_damage;

	public :
		ClapTrap(void);
		ClapTrap(const ClapTrap &claptrap);
		ClapTrap(std::string name);
		ClapTrap(std::string name, unsigned int hit_points, unsigned int energy_points, unsigned int attack_damage);
		~ClapTrap(void);
		ClapTrap &operator=(ClapTrap &claptrap);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getName(void);
		void setName(std::string name);
		unsigned int getAttackDamage(void);
		void setAttackDamage(unsigned int attack_damage);
};

#endif