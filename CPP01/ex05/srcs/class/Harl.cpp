/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:53:12 by abahmani          #+#    #+#             */
/*   Updated: 2022/09/29 16:29:34 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {
	return ;
}

Harl::~Harl(void) {
	return ;
}

void Harl::_debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void Harl::_info(void) {
	std::cout <<  "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void Harl::_warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::_error(void) {
	std::cout <<  "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level){
	t_level t[4];

	t[0].level = "DEBUG";
	t[1].level = "INFO";
	t[2].level = "WARNING";
	t[3].level = "ERROR";
	t[0].p = &Harl::_debug;
	t[1].p = &Harl::_info;
	t[2].p = &Harl::_warning;
	t[3].p = &Harl::_error;
	for (int i = 0; i < 4; i++)
	{
		if (t[i].level == level) {
			void (Harl::*ptr)(void) = t[i].p;
			(this->*ptr)();
		}
	}
}
