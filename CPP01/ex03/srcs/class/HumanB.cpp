/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 13:09:18 by abahmani          #+#    #+#             */
/*   Updated: 2022/10/16 18:38:10 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL){
	//std::cout << "The HumanB " << name << " has been created." << std::endl;
	return ;
}

HumanB::~HumanB(void) {
	//std::cout << "The HumanB " << this->_name << " has been deleted." << std::endl;
	return ;
}

void HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
	//std::cout << "The HumanB " << this->_name << " got the weapon " << weapon.getType() << "." << std::endl;
}

void HumanB::attack(void) {
	if (this->_weapon)
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " does not have weapon" << std::endl;
}
