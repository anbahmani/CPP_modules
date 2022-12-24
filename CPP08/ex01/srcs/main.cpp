/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 15:07:33 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/18 19:39:44 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void printSpan(Span &sp){
	std::vector<int>::iterator begin = sp.getBegin();
	std::vector<int>::iterator end = sp.getEnd();
	for (std::vector<int>::iterator it = begin; it != end; it++)
		std::cout << "vector = " << *it << std::endl;
}

int main() {
	std::vector<int> v(10, 42);
	Span sp = Span(20);
	sp.addNumber(6);
	sp.addNumber(-3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.addNumber(v.begin(), v.end());
	printSpan(sp);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	try {
		std::vector<int> v2(15, -42);
		sp.addNumber(v.begin(), v.end());
	} catch(const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	Span sp2 = Span(0);
	try {
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}