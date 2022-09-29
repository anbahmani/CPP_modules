/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 13:10:12 by abahmani          #+#    #+#             */
/*   Updated: 2022/09/29 13:23:20 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void) {
Weapon club1 = Weapon("crude spiked club1");
HumanA bob("Bob", club1);
bob.attack();
club1.setType("some other type of club1");
bob.attack();

Weapon club2 = Weapon("crude spiked club2");
HumanB jim("Jim");
jim.setWeapon(club2);
jim.attack();
club2.setType("some other type of club2");
jim.attack();

return 0;
}