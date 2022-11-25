/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:32:26 by abahmani          #+#    #+#             */
/*   Updated: 2022/11/22 09:58:49 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
	
	private :
		int _raw;
		static const int _bits = 8;

	public :
		Fixed(void);
		Fixed(const Fixed &fixed);
		Fixed(const int raw);
		Fixed(const float raw);
		~Fixed(void);
		Fixed &operator=(const Fixed& fixed);
		bool operator>(const Fixed& fixed) const;
		bool operator>=(const Fixed& fixed) const;
		bool operator<(const Fixed& fixed) const;
		bool operator<=(const Fixed& fixed) const;
		bool operator==(const Fixed& fixed) const;
		bool operator!=(const Fixed& fixed) const;
		Fixed operator+(const Fixed&fixed) const;
		Fixed operator-(const Fixed&fixed) const;
		Fixed operator*(const Fixed&fixed) const;
		Fixed operator/(const Fixed&fixed) const;
		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		static Fixed &min(Fixed &f1, Fixed &f2);
		static const Fixed &min(const Fixed&f1, const Fixed&f2);
		static Fixed &max(Fixed &f1, Fixed &f2);
		static const Fixed &max(const Fixed&f1, const Fixed&f2);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif