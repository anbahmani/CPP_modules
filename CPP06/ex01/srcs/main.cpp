/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by abahmani          #+#    #+#             */
/*   Updated: 2022/12/17 03:05:13 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}

int main(void) {
	Data *ptr = new Data;;
	ptr->i1 = 1;
	ptr->i2 = 2;
	ptr->i3 = 3;
	uintptr_t raw;

	std::cout << "Pointer initial value: " << ptr << std::endl;
	std::cout << "Data variables member initial value:" << std::endl;
	std::cout << "\ti1 = " << ptr->i1 << std::endl;
	std::cout << "\ti2 = " << ptr->i2 << std::endl;
	std::cout << "\ti3 = " << ptr->i3 << std::endl;

	
	raw = serialize(ptr);
	std::cout << "Function serialize return value: " << raw << std::endl;
	ptr = deserialize(raw);
	std::cout << "Function deserialize return value: " << ptr << std::endl;
	std::cout << "Data variables member value:" << std::endl;
	std::cout << "\ti1 = " << ptr->i1 << std::endl;
	std::cout << "\ti2 = " << ptr->i2 << std::endl;
	std::cout << "\ti3 = " << ptr->i3 << std::endl;

	delete ptr;
}