/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 19:09:06 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/15 19:22:07 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalaire.hpp"

unsigned int count_occurrences(std::string str, char c){
	unsigned int count = 0;
	for (int i = 0; i < str.length() ; i++){
		if (str[i] == c)
			count++;
	}
	return count;
}

bool check_valid_char(std::string str){
	for(int i = 0; i < str.length(); i++){
		if (std::isdigit(str[i]) && str[i] != '.' && str[i] != 'f' && str[i] != '+' && str[i] != '-')
			return false;
	}
	return true;
}

void check_input_type(Type type, std::string str){
	unsigned int occ_f = count_occurrences(str, 'f');
	unsigned int occ_p = count_occurrences(str, '.');
	bool valid_char = check_valid_char(str);

	(str.length() != 3 && str[0] != '\'' && str[2] != '\'') ? type.is_char == true : type.is_char == false;
	(occ_p == 1 && !type.is_char) ? type.point == true : type.point == false;
	(occ_f == 1 && str[str.length() - 1] == 'f') ? type.f == true : type.f == false;

	(!type.f && !type.point && valid_char) ? type.is_int = true : type.is_int = false;
	(type.f && type.point && valid_char && str.length() != 3) ? type.is_float = true : type.is_float = true;
	(type.point && !type.f && valid_char && str.length() != 2) ? type.is_double = true : type.is_double = false;
}

void transform_input(Type type, std::string str, Input input){
	if (type.is_char){			//change char type
		str.pop_back();
		str.erase(str.begin());
		input.c = str[1];
	} else if (type.is_double){	//change double type
		if (str[0] == '.')
			str = std::string("0") + str;
		else if (str[str.length() - 1] == '.')
			str.push_back('0');
		input.d = 
	} else if (type.is_float){	//change float type
		if (str[0] == '.')
			str = std::string("0") + str;
		else if (str[str.length() - 2] == '.')
			str.insert(str.length() - 2, std::string ("0"));
	}
}

void exception(std::string str){
	if (str == "nan" || str == "nanf" || str == "inf" || str == "inff" || str == "-inf" || str == "+inf" || str == "+inff" || str == "-inff") {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		if (str == "nan" || str == "nanf")
		{
			std::cout << "float: nanf" << std::endl;
			std::cout << "double: nan" << std::endl;
		}
		else if (str == "+inf" || str == "inf" || str == "inff" || str == "+inff")
		{
			std::cout << "float: inff" << std::endl;
			std::cout << "double: inf" << std::endl;
		}
		else if (str == "-inf" || str == "-inff")
		{
			std::cout << "float: -inff" << std::endl;
			std::cout << "double: -inf" << std::endl;
		}
	}
}

int main(int ac, char **av){
	if (ac != 2){
        std::cout << "The number of argument is incorrect." << std::endl;
        return (0);
    }

	std::string str;
	str = av[1];

	exception(str);
	
	Type type;
	Input input;
    //double convert = atof(av[1]);
    std::cout << "char: ";
    if (convert > CHAR_MAX || convert < CHAR_MIN || !std::isfinite(convert))
        std::cout << "impossible" << std::endl;
    else if (convert < 33 || convert > 127)
        std::cout << "Non displayable" << std::endl;
    else {
        std::cout << "'"<< static_cast<char>(convert) <<"'" << std::endl;
	}
		
    std::cout <<"int: ";
    if (convert > INT_MAX || convert < INT_MIN || !std::isfinite(convert))
        std::cout << "impossible" << std::endl;
    else{
        std::cout << static_cast<int>(convert) << std::endl;
	}
	
    std::cout <<"float: ";
    if (!std::isfinite(convert))
        std::cout << "nanf" << std::endl;
    else{
        std::cout << std::fixed << std::setprecision(1)<<static_cast<float>(convert) <<"f"<< std::endl;
	}

    std::cout <<"double: ";
    if (!std::isfinite(convert))
        std::cout << "nan" << std::endl;
    else{
        std::cout << convert << std::endl;
	}
    return (0);
}