/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 10:55:31 by abahmani          #+#    #+#             */
/*   Updated: 2022/11/09 18:16:46 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie *zombie1 = newZombie("z1");
	Zombie *zombie2 = newZombie("z2");
	zombie1->announce();
	zombie2->announce();
	delete zombie1;
	delete zombie2;

	randomChump("z3");
	randomChump("z4");
}