/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:32:26 by abahmani          #+#    #+#             */
/*   Updated: 2022/09/30 17:49:08 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
	
	private :
		int _raw;
		static const int _bits;

	public :
		Fixed(void);
		Fixed(Fixed &fixed);
		~Fixed(void);
		Fixed operator=(const Fixed& fixed);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif