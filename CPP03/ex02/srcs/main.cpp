/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:31:36 by abahmani          #+#    #+#             */
/*   Updated: 2022/10/21 05:41:32 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

int main(void) {
	FlagTrap a;
	a.setName("Anis1");
	FlagTrap b = FlagTrap(a);
	FlagTrap c = FlagTrap("Anis2");

	b.attack(c.getName());
	c.attack(b.getName());
	a.highFivesGuys();
	return (0);
}