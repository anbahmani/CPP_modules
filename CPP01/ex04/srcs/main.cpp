/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:10:31 by abahmani          #+#    #+#             */
/*   Updated: 2022/11/19 18:08:56 by abahmani         ###   ########.fr       */
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
	std::string buffer = "";
	if (check_empty_string(filename, s1, s2))
		return (0);
	std::string str;
	std::ifstream ifs(filename.c_str());
	if (!ifs.good())
	{
		std::cout << "There is no file." << std::endl;
		return (1);
	}
	if (ifs.fail())
	{
		std::cout << "The file can't be opened." << std::endl;
		return (1);
	}
	while (getline(ifs, str))
	{
		buffer += str;
		if(!ifs.eof())
			buffer += '\n';
	}
	ifs.close();
	if (!buffer.empty()) {
		std::ofstream ofs(filename.append(".replace").c_str());
		if (ofs.fail()){
			std::cout << "The output file can't be created." << std::endl;
			return (1);
		}
		size_t pos = buffer.find(s1);
        while (pos != std::string::npos)
        {
			ofs << buffer.substr(0, pos) << s2;
			buffer = buffer.substr(pos + s1.length());
			pos = buffer.find(s1);
        }
        if (!buffer.empty())
            ofs << buffer;
		ofs.close();
    }
	return (0);
}