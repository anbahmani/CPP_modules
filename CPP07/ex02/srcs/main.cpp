/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 11:56:42 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/17 16:51:22 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void){
	Array<int> array_int2;
	Array<int> array_int(10);
	Array<char> array_char(5);
	
	std::cout<< "array2 of int size: " << array_int2.size() << std::endl;
	std::cout << "array of int size: " << array_int.size() << std::endl;
	std::cout << "array of char size: " << array_char.size() << std::endl;

	std::cout << std::endl;


	try {
		std::cout << array_int2[0] << std::endl;
	}catch (const std::exception &e){
		std::cerr << "Error here" << std::endl;
	}
	
	array_int2 = array_int;
	array_int[0]++;
	std::cout << "array2 of int first value: " << array_int2[0] << std::endl;
	std::cout << "array of int first value: " << array_int[0] << std::endl;

	std::cout << std::endl;

	try {
		array_int[9] += 7;
		std::cout << "array2 of int 10th value: " << array_int[9] << std::endl;
	}catch(const std::exception &e){
		std::cerr << "bad index" << std::endl;
	}

	try {
		array_int[11]++;
	}catch(const std::exception &e){
		std::cerr << "bad index" << std::endl;
	}

	array_char[0] = 'a';
	array_char[1] = 'B';
	array_char[2] = 'c';
	array_char[3] = 'D';
	array_char[4] = 'e';
	std::cout << "array of char value: " << array_char[0] << array_char[1] << array_char[2] << array_char[3] << array_char[4] << std::endl;
}