/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 05:37:40 by abahmani          #+#    #+#             */
/*   Updated: 2022/10/21 05:38:40 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FlagTrap : public ClapTrap {
	
	public :
		FlagTrap(void);
		FlagTrap(const FlagTrap &flagTrap);
		FlagTrap(std::string name);
		~FlagTrap(void);
		void attack(const std::string& target);\
		void highFivesGuys(void);
};

#endif