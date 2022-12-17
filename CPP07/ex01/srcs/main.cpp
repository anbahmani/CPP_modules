/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 07:36:11 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/17 16:42:09 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main (void) {
	std::string str_tab[] = {"salut", "bonjour", "hello"};
	int int_tab[] = {1 , 55, -77, 0, 42};

	std::cout << "**************String test**************" << std::endl;
	iter(str_tab, 3, printElem);
	std::cout << "**************Int test**************" << std::endl;
	iter(int_tab, 5, printElem);
	
}