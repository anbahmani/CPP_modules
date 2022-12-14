/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalaire.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:09:15 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/17 04:26:56 by abahmani         ###   ########.fr       */
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
#include <cctype>

typedef struct Type {
	bool point;
	bool f;
	bool is_char;
	bool is_float;
	bool is_double;
	bool is_int;
	bool impossible;
} Type;

#endif