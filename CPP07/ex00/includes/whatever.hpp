/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 07:07:45 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/17 07:11:31 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T &a, T &b) {
	T c = a;
	a = b;
	b = c;
}

template <typename T>
T min(const T &a, const T &b) {
	return (a < b ? a : b);
}

template <typename T>
T max(const T &a, const T &b) {
	return (a > b ? a : b);
}

#endif