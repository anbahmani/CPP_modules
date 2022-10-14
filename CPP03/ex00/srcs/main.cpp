/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:31:36 by abahmani          #+#    #+#             */
/*   Updated: 2022/10/14 19:55:22 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
	ClapTrap a;
	a.setName("Anis1");
	ClapTrap b = ClapTrap(a);
	ClapTrap c = ClapTrap("Anis2");
	b = a;

	b.setAttackDamage(5);
	b.attack(c.getName());
	c.takeDamage(b.getAttackDamage());
	c.beRepaired(5);
	b.attack(c.getName());
	c.takeDamage(b.getAttackDamage());
	b.attack(c.getName());
	c.takeDamage(b.getAttackDamage());
	b.attack(c.getName());
	c.takeDamage(b.getAttackDamage());
	c.beRepaired(5);
}