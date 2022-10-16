/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:10:31 by abahmani          #+#    #+#             */
/*   Updated: 2022/10/16 18:42:20 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	check_empty_string(std::string filename, std::string s1, std::string s2) {
	int nb_error = 0;
	
	if (filename.empty()) {
		std::cout << "The file name is empty." << std::endl;
		nb_error++;
	}
	if (s1.empty()) {
		std::cout << "The string s1 is empty." << std::endl;
		nb_error++;
	}
	if (s2.empty()) {
		std::cout << "The string s2 is empty." << std::endl;
		nb_error++;
	}
	if (nb_error != 0)
		return (1);
	else
		return (0);
}

int main(int ac, char **av) {
	if (ac != 4){
		std::cout << "The number of arguments is not correct." << std::endl;
		return (1);
	}
	std::string filename = std::string(av[1]);
	std::string s1 = av[2];
	std::string s2 = av[3];
	check_empty_string(filename, s1, s2);
	std::string str;
	std::ifstream ifs(filename);
	std::ofstream ofs(filename.append(".replace"));
	while (1) {
		getline(ifs, str);
		size_t pos = str.find(s1);
        while (pos != std::string::npos)
        {
			ofs << str.substr(0, pos) << s2;
			str = str.substr(pos + s1.length());
			pos = str.find(s1);
        }
        if (!str.empty())
            ofs << str;
        ofs << std::endl;
        if (ifs.eof())
            break ;
    }
	ifs.close();
	ofs.close();
	return (0);
}