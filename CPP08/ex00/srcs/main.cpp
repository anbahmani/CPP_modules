/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 17:10:18 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/17 23:35:23 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

const char *NotFound::what() const throw() {
	return ("Error: No occurence has been found.");
}

int main(void){
	std::vector<int>::iterator it;
	std::vector<int> v;
	v.push_back(0);
	v.push_back(42);
	v.push_back(-42);
	v.push_back(7);
	v.push_back(800);
	v.push_back(-4);
	v.push_back(3);
	try {
		it = easyfind(v, 0);
		std::cout << *it << std::endl;
		it = easyfind(v, -42);
		std::cout << *it << std::endl;
		it = easyfind(v, 7);
		std::cout << *it << std::endl;
		it = easyfind(v, 3);
		std::cout << *it << std::endl;
		it = easyfind(v, 800);
		std::cout << *it << std::endl;
		it = easyfind(v, 12);
		std::cout << *it << std::endl;
	} catch (const std::exception &e){
		std::cerr << "There is no occurence." <<std::endl; 
	}
}