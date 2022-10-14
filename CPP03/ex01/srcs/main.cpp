/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:31:36 by abahmani          #+#    #+#             */
/*   Updated: 2022/10/14 19:43:41 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
	ScavTrap a;
	a.setName("Anis1");
	ScavTrap b = ScavTrap(a);
	ScavTrap c = ScavTrap("Anis2");

	b.attack(c.getName());
	c.attack(b.getName());
	a.guardGate();
	return (0);
}