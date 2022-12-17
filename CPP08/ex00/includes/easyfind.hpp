/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 17:09:51 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/17 23:40:11 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <exception>
# include <vector>
# include <iostream>
# include <algorithm>

class NotFound : public std::exception {
	virtual const char* what() const throw();
};

template<typename T>
typename T::iterator easyfind(T &t, int nb) {
	typename T::iterator occ = find(t.begin(), t.end(), nb); 
	if (occ == t.end()) 
		throw NotFound();
	return (occ);
}

#endif