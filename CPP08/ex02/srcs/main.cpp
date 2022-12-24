/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 19:52:22 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/18 20:15:19 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(void) {
	MutantStack<int> mstack;

	std::cout << "************************MutantStack tests************************" << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << "mstack.top() = " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "mstack.size() = "<< mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "mstack : "<< std::endl;
	while (it != ite){
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << std::endl;
	std::cout << "************************vector tests************************" << std::endl;
	std::vector<int> v;
	v.push_back(5);
	v.push_back(17);
	std::cout << "*(v.end() - 1) = " << *(v.end() - 1) << std::endl;
	v.erase(v.end() - 1);
	std::cout << "v.size() = " << v.size() << std::endl;
	v.push_back(3);
	v.push_back(5);
	v.push_back(737);
	v.push_back(0);
	std::vector<int>::iterator it_v = v.begin();
	std::vector<int>::iterator ite_v = v.end();
	++it_v;
	--it_v;
	std::cout << "vector : "<< std::endl;
	while (it_v != ite_v){
		std::cout << *it_v << std::endl;
		++it_v;
	}
	std::stack<int> s(mstack);
	return 0;
}