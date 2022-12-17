/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 07:36:08 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/17 11:51:12 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void iter(T *arr_ptr, unsigned int length, void (*f)(T &param)){
	for (unsigned int i = 0; i < length; i++)
		f(arr_ptr[i]);
}

template<typename T>
void printElem(T &elem) {
	std::cout << elem << std::endl;
}

#endif