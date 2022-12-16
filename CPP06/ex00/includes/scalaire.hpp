/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalaire.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:09:15 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/15 19:03:47 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAIRE_HPP
# define SCALAIRE_HPP

#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <limits.h>
#include <stdlib.h>
#include <string>
#include <cstring>

typedef struct Type {
	bool point;
	bool valid;
	bool f;
	bool is_char;
	bool is_float;
	bool is_double;
	bool is_int;
} Type;

typedef struct Input {
	std::string str;
	char c;
	int i;
	float f;
	double d;
} Input;

#endif