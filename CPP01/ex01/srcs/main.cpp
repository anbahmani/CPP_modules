/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:33:04 by abahmani          #+#    #+#             */
/*   Updated: 2022/11/09 18:25:13 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <stdlib.h>

int main (int ac, char **av) {
	if (ac != 3)
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
	std::string name = av[2];
	Zombie *zombies = zombieHorde(N, name);
	for (int i = 0; i < N; i++)
		zombies[i].announce();
	delete [] zombies;
}