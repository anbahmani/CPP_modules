/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:31:39 by abahmani          #+#    #+#             */
/*   Updated: 2022/11/28 20:32:00 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name(""), _hit_points(10), _energy_points(10), _attack_damage(0){
	std::cout << "Default Claptrap constructor has been called." << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap) : _name(claptrap._name), _hit_points(claptrap._hit_points), _energy_points(claptrap._energy_points), _attack_damage(claptrap._attack_damage) {
	std::cout << "Copy Claptrap constructor has been called." << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(100), _energy_points(50), _attack_damage(20) {
	std::cout << "Claptrap constructor by name has been called." << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name, unsigned int hit_points, unsigned int energy_points, unsigned int attack_damage) : _name(name), _hit_points(hit_points), _energy_points(energy_points), _attack_damage(attack_damage) {
	std::cout << "Claptrap constructor with all attributes has been called." << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Claptrap "<< this->_name << " destructor has been called." << std::endl;
	return ;
}

ClapTrap& ClapTrap::operator=(ClapTrap &claptrap) {
	this->_name = claptrap._name;
	this->_hit_points = claptrap._hit_points;
	this->_energy_points = claptrap._energy_points;
	this->_attack_damage = claptrap._attack_damage;
	return (*this);
}

void ClapTrap::attack(const std::string& target) {
	if (this->_energy_points > 0 && this->_hit_points > 0) {
		std::cout << "ClapTrap "<< this->_name << " attacks " << target <<", causing "<< this->_attack_damage <<" points of damage!";
		this->_energy_points--;
	}
	else if (this->_energy_points == 0)
		std::cout << "Claptrap " << this->_name << " can't attack because it does not have energy points.";
	else if (this->_hit_points == 0)
		std::cout << "Claptrap " << this->_name << " can't attack because it does not have hit points.";
	std::cout << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hit_points > 0 && amount > 0){
		std::cout << "Claptrap " << this->_name << " takes " << amount << " attack damage !";
		this->_hit_points > amount ? this->_hit_points -= amount : this->_hit_points = 0;
	}
	else if (this->_hit_points == 0)
		std::cout << "Claptrap " << this->_name << " can't be attacked because it does not have hit points.";
	else if (amount == 0)
		std::cout << "Claptrap " << this->_name << " did not take damage because the amount of attack damage is 0.";
	std::cout << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hit_points > 0 && this->_energy_points > 0 && amount > 0) {
		std::cout << "Claptrap " << this->_name << " is repaired, it gains "<< amount <<" hit point !" << std::endl;
		this->_energy_points--;
		this->_hit_points += amount;
	}
	else if (this->_hit_points == 0)
		std::cout << "Claptrap " << this->_name << " can't be repaired because it does not have hit points.";
	else if (this->_energy_points == 0)
		std::cout << "Claptrap " << this->_name << " can't be repaired because it does not have energy points.";
	else if (amount == 0)
		std::cout << "Claptrap " << this->_name << " did not take damage because the amount of repairing is 0.";
}

std::string ClapTrap::getName(void) {
	return (this->_name);
}

void ClapTrap::setName(std::string name) {
	this->_name = name;
	return ;
}

unsigned int ClapTrap::getAttackDamage(void) {
	return (this->_attack_damage);
}

void ClapTrap::setAttackDamage(unsigned int attack_damage) {
	this->_attack_damage = attack_damage;
}
