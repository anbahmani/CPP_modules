/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 19:09:06 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/17 02:48:25 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalaire.hpp"

unsigned int count_occurrences(std::string str, char c){
	unsigned int count = 0;
	for (unsigned long i = 0; i < str.length() ; i++){
		if (str[i] == c)
			count++;
	}
	return count;
}

bool check_valid_char(std::string str){
	for(unsigned long i = 0; i < str.length(); i++){
		if (std::isdigit(str[i]) && str[i] != '.' && str[i] != 'f' && str[i] != '+' && str[i] != '-')
			return false;
	}
	return true;
}

void check_input_type(Type *type, std::string str){
	unsigned int occ_f = count_occurrences(str, 'f');
	unsigned int occ_p = count_occurrences(str, '.');
	bool valid_char = check_valid_char(str);

	(str.length() == 1) ? type->is_char = true : type->is_char = false;
	(occ_p == 1 && !type->is_char) ? type->point = true : type->point = false;
	(occ_f == 1 && str[str.length() - 1] == 'f' && !type->is_char) ? type->f = true : type->f = false;

	(!type->f && !type->point && valid_char && !type->is_char) ? type->is_int = true : type->is_int = false;
	(type->f && type->point && valid_char) ? type->is_float = true : type->is_float = true;
	(type->point && !type->f && valid_char) ? type->is_double = true : type->is_double = false;
}

void transform_input(Type type, std::string str){
	if (type.is_double){	//change double type
		if (str[0] == '.')
			str = std::string("0") + str;
		if (str[str.length() - 1] == '.')
			str.push_back('0');
	} else if (type.is_float){	//change float type
		if (str[0] == '.')
			str = std::string("0") + str;
		if (str[str.length() - 2] == '.')
			str.insert(str.length() - 2, std::string ("0"));
	}
}

bool exception(std::string str){
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
		return (true);
	}
	return false;
}

void char_conversion(std::string str){
	char c = str[0];

	if (c < CHAR_MIN || c > CHAR_MAX) {
		std::cout << "char: impossible" << std::endl;
	} else {
		if (!std::isprint(static_cast<char>(c)))
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << c << "'"<< std::endl;
	}
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void int_conversion(std::string str){
	int i = atoi(str.c_str());

	if (i < CHAR_MIN || i > CHAR_MAX) {
		std::cout << "char: impossible" << std::endl;
	} else {
		if (!std::isprint(static_cast<char>(i)))
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(i) << "'"<< std::endl;
	}
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

void float_conversion(std::string str){
	float f = strtof(str.c_str(), NULL);

	if (static_cast<int>(f) < CHAR_MIN || static_cast<int>(f) > CHAR_MAX) {
		std::cout << "char: impossible" << std::endl;
	} else {
		if (!std::isprint(static_cast<char>(f)))
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(f) << "'"<< std::endl;
	}
	std::cout << "int: ";
	if (static_cast<long long>(f) > INT_MIN && static_cast<long long>(f) < INT_MAX)
		std::cout << static_cast<int>(f) << std::endl;
	else
		std::cout << "impossible" <<std::endl;
	std::cout << "float: " << f;
	if (f == static_cast<int>(f))
		std::cout << ".0";
	std::cout << "f"<< std::endl;
	std::cout << "double: " << static_cast<double>(f);
	if (f == static_cast<int>(f))
		std::cout << ".0";
	std::cout << std::endl;
}

void double_conversion(std::string str){
	double d = strtod(str.c_str(), NULL);

	if (static_cast<int>(d) < CHAR_MIN || static_cast<int>(d) > CHAR_MAX) {
		std::cout << "char: impossible" << std::endl;
	} else {
		if (!std::isprint(static_cast<char>(d)))
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(d) << "'"<< std::endl;
	}
	std::cout << "int: ";
	if (static_cast<long long>(d) > INT_MIN && static_cast<long long>(d) < INT_MAX)
		std::cout << static_cast<int>(d) << std::endl;
	else
		std::cout << "impossible" <<std::endl;
	std::cout << "float: " << d;
	if (d == static_cast<int>(d))
		std::cout << ".0f";
	std::cout << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(d);
	if (d == static_cast<int>(d))
		std::cout << ".0";
	std::cout << std::endl;
}

int main(int ac, char **av){
	if (ac != 2){
        std::cout << "The number of argument is incorrect." << std::endl;
        return (0);
    }

	std::string str;
	str = av[1];
	if (exception(str))
		return (0);
	Type type;
    
	check_input_type(&type, str);
	transform_input(type, str);
	if (type.is_char)
		char_conversion(str);
	else if (type.is_int)
		int_conversion(str);
	else if (type.is_float)
		float_conversion(str);
	else if (type.is_double)
		double_conversion(str);
    return (0);
}