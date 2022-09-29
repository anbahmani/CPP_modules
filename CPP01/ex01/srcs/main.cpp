/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:33:04 by abahmani          #+#    #+#             */
/*   Updated: 2022/09/29 11:44:50 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (int ac, char **av) {
	if (ac != 2)
	{
		std::cout << "The number of arguments is incorrect." << std::endl;
		return (1);
	}
	for (unsigned int i = 0; i < strlen(av[1]); i++) {
        if (std::isdigit(av[1][i]) == 0){
			std::cout << "The argument is in a bad format." << std::endl;
			return (1);
		}
    }

	int N = atoi(av[1]);
	Zombie *zombies = zombieHorde(N, "zombiiiiiie");
	for (int i = 0; i < N; i++)
		zombies[i].announce();
	delete [] zombies;
}