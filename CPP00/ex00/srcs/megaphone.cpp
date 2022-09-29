/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 12:12:25 by abahmani          #+#    #+#             */
/*   Updated: 2022/09/28 12:09:05 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "megaphone.hpp"

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for(int i = 1; i < ac; i++)
		{
			for(int j = 0; av[i][j]; j++)
				std::cout << (char)toupper(av[i][j]);
			if (av[i + 1] != NULL)
				std::cout << " ";
		}
	}
	std::cout << std::endl;
	return (0);
}
