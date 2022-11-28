/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 05:39:05 by abahmani          #+#    #+#             */
/*   Updated: 2022/11/28 20:32:00 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

FlagTrap::FlagTrap(void) : ClapTrap("", 100, 100, 30) {
	std::cout << "Default FlagTrap constructor has been called." << std::endl;
	return ;
}

FlagTrap::FlagTrap(const FlagTrap &flagTrap) : ClapTrap(flagTrap) {
	std::cout << "Copy FlagTrap constructor has been called." << std::endl;
	return ;
}

FlagTrap::FlagTrap(std::string name) : ClapTrap(name, 100, 100, 30) {
	std::cout << "FlagTrap constructor by name has been called." << std::endl;
	return ;
}

FlagTrap::~FlagTrap(void) {
	std::cout << "FlagTrap "<< this->_name << " destructor has been called." << std::endl;
	return ;
}

void FlagTrap::attack(const std::string& target) {
	if (this->_energy_points > 0 && this->_hit_points > 0) {
		std::cout << "FlagTrap "<< this->_name << " attacks " << target <<", causing "<< this->_attack_damage <<" points of damage!";
		this->_energy_points--;
	}
	else if (this->_energy_points == 0)
		std::cout << "FlagTrap " << this->_name << " can't attack because it does not have energy points.";
	else if (this->_hit_points == 0)
		std::cout << "FlagTrap " << this->_name << " can't attack because it does not have hit points.";
	std::cout << std::endl;
}

void FlagTrap::highFivesGuys(void) {
	std::cout << "FlagTrap " << this->_name << " asks to have a high fives." << std::endl;
}
