/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:31:36 by abahmani          #+#    #+#             */
/*   Updated: 2022/11/28 20:29:32 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

int main(void) {

	std::cout << "---------------------------ClapTrap part-----------------------" <<std::endl;
	
	ClapTrap c1;
	c1.setName("Claptrap1");
	ClapTrap c2 = ClapTrap(c1);
	ClapTrap c3 = ClapTrap("Claptrap3");

	c2.attack(c1.getName());
	c1.takeDamage(c2.getAttackDamage());
	c1.attack(c3.getName());
	c3.takeDamage(c1.getAttackDamage());
	c1.beRepaired(10);


	std::cout << "---------------------------ScavTrap part-----------------------" <<std::endl;


	ScavTrap s1;
	s1.setName("Scavtrap1");
	ScavTrap s2 = ScavTrap(s1);
	ScavTrap s3 = ScavTrap("Scavtrap3");

	s2.attack(s1.getName());
	s1.takeDamage(s2.getAttackDamage());
	s1.attack(s3.getName());
	s3.takeDamage(s1.getAttackDamage());
	s1.guardGate();
	
	
	std::cout << "---------------------------FlagTrap part-----------------------" <<std::endl;

	
	FlagTrap f1;
	f1.setName("Flagtrap1");
	FlagTrap f2 = FlagTrap(f1);
	FlagTrap f3 = FlagTrap("Flagtrap2");

	f2.attack(f1.getName());
	f1.takeDamage(f2.getAttackDamage());
	f1.attack(f3.getName());
	f3.takeDamage(f1.getAttackDamage());
	f1.highFivesGuys();


	std::cout << "---------------------------Mixed part-----------------------" <<std::endl;

	f1.attack(c2.getName());
	c2.takeDamage(f1.getAttackDamage());
	
	s2.attack(f2.getName());
	f2.takeDamage(s2.getAttackDamage());
	return (0);
}