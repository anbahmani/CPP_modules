/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 19:09:06 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/11 19:19:27 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <limits.h>
#include <stdlib.h>
#include <string>
#include <cstring>


int main(int ac, char **av){
	if (ac != 2){
        std::cout << "The number of argument is incorrect." << std::endl;
        return (0);
    }
    double convert = atof(av[1]);


    std::cout << "char: ";
    if (convert > CHAR_MAX || convert < CHAR_MIN || !std::isfinite(convert))
        std::cout << "impossible" << std::endl;
    else if (convert < 33 || convert > 127)
        std::cout << "Non displayable" << std::endl;
    else {
        std::cout << "'"<< static_cast<char>(convert) <<"'" << std::endl;
	}
	std::cout << std::endl;
		
    std::cout <<"int: ";
    if (convert > INT_MAX || convert < INT_MIN || !std::isfinite(convert))
        std::cout << "impossible" << std::endl;
    else{
        std::cout << static_cast<int>(convert) << std::endl;
	}
	std::cout << std::endl;

    std::cout <<"float: ";
    if (!std::isfinite(convert))
        std::cout << "nanf" << std::endl;
    else{
        std::cout << std::fixed << std::setprecision(1)<<static_cast<float>(convert) <<"f"<< std::endl;
	}
	std::cout << std::endl;

    std::cout <<"double: ";
    if (!std::isfinite(convert))
        std::cout << "nan" << std::endl;
    else{
        std::cout << convert << std::endl;
	}
    return (0);
}