/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:32:22 by abahmani          #+#    #+#             */
/*   Updated: 2022/10/14 19:43:30 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
	std::cout << "Default ScavTrap constructor has been called." << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap) : ClapTrap(scavTrap) {
	std::cout << "Copy ScavTrap constructor has been called." << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap constructor by name has been called." << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor has been called." << std::endl;
	return ;
}

void ScavTrap::attack(const std::string& target) {
	if (this->_energy_points > 0 && this->_hit_points > 0) {
		std::cout << "ScavTrap "<< this->_name << " attacks " << target <<", causing "<< this->_attack_damage <<" points of damage!";
		this->_energy_points--;
	}
	else if (this->_energy_points == 0)
		std::cout << "ScavTrap " << this->_name << " can't attack because it does not have energy points.";
	else if (this->_hit_points == 0)
		std::cout << "ScavTrap " << this->_name << " can't attack because it does not have hit points.";
	std::cout << std::endl;
}

void ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << this->_name << " enteres in  Gate keepe mode." << std::endl;
}
