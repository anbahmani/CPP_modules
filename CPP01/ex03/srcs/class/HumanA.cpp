/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 13:09:20 by abahmani          #+#    #+#             */
/*   Updated: 2022/10/16 18:27:54 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {
	//std::cout << "The HumanA " << name << " has been created with the weapon " << weapon.getType() << "." << std::endl;
	return ;
}

HumanA::~HumanA(void) {
	//std::cout << "The HumanA " << this->_name << " has been created." << std::endl;
	return ;
}

void HumanA::attack(void) {
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
