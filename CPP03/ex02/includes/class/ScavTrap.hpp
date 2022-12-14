/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:30:41 by abahmani          #+#    #+#             */
/*   Updated: 2022/11/28 20:33:18 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	
	public :
		ScavTrap(void);
		ScavTrap(const ScavTrap &scavTrap);
		ScavTrap(std::string name);
		~ScavTrap(void);
		void attack(const std::string& target);
		void guardGate(void);
};

#endif