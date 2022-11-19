/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:53:25 by abahmani          #+#    #+#             */
/*   Updated: 2022/11/19 22:01:10 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(){
	Harl harl;

	std::cout << "Harl prints : ";
	harl.complain("DEBUG");
	std::cout << "Harl does not print." << std::endl;;
	harl.complain("DEBUGS");
	std::cout << "Harl does not print." << std::endl;;
	harl.complain("DEBU");
	std::cout << "Harl prints : ";
	harl.complain("INFO");
	std::cout << "Harl does not print." << std::endl;;
	harl.complain("INFO!");
	std::cout << "Harl does not print." << std::endl;;
	harl.complain("INF");
	std::cout << "Harl prints : ";
	harl.complain("WARNING");
	std::cout << "Harl does not print." << std::endl;;
	harl.complain("WARNINGS");
	std::cout << "Harl does not print." << std::endl;;
	harl.complain("WARNI");
	std::cout << "Harl prints : ";
	harl.complain("ERROR");
	std::cout << "Harl does not print." << std::endl;;
	harl.complain("ERRORA");
	std::cout << "Harl does not print." << std::endl;;
	harl.complain("ERRO");
	std::cout << "Harl does not print." << std::endl;;
	harl.complain("TEST");
	std::cout << "Harl does not print." << std::endl;;
	harl.complain("");
	std::cout << "Harl does not print." << std::endl;;
	harl.complain("42");
	std::cout << "Harl does not print." << std::endl;;
	harl.complain("$$$");
	return (0);
}