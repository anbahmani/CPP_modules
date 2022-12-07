/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 23:17:15 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/07 21:19:43 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) : _ideas(new std::string[NB_IDEAS_MAX]) , _index(0), _start_forget(false){
	std::cout << "Default Brain constructor has been called." << std::endl;
	return ;
}

Brain::Brain(const Brain& brain) : _ideas(new std::string[NB_IDEAS_MAX]), _index(brain._index), _start_forget(brain._start_forget) {
	std::cout << "Copy Brain constructor has been called." << std::endl;
	for (int i = 0; i < NB_IDEAS_MAX; i++)
		this->_ideas[i] = brain._ideas[i];
	return ;
}

Brain& Brain::operator=(const Brain &brain) {
	std::cout << "Brain affectation operator has been called." << std::endl;
	this->_index = brain._index;
	this->_start_forget = brain._start_forget;
	for (int i = 0; i < NB_IDEAS_MAX; i++)
		this->_ideas[i] = brain._ideas[i];
	return *this;
}

Brain::~Brain(void) {
	std::cout << "Brain destructor has been called." << std::endl;
	delete []_ideas;
	return ;
}

void Brain::add_idea(std::string idea){
	std::cout << "Default Brain constructor has been called." << std::endl;
	if (this->_index == NB_IDEAS_MAX){
		this->_start_forget = true;
		this->_index = 0;
	}
	if (this->_start_forget)
		std::cout << "Brain forgot the oldest idea." << std::endl;
	this->_ideas[this->_index++] = idea;
}

void Brain::setStartForget(int nb) {
	this->_start_forget = nb;
}

void Brain::setIndex(int nb) {
	this->_index = nb;
}

std::ostream &operator<<(std::ostream &out, const Brain &brain) {
	out << "******All the ideas in brain******" << std::endl;
	if (brain._start_forget) {
		for (unsigned int i = 0; i < NB_IDEAS_MAX; i++)
			ost << brain._ideas[i] << std::endl;
	}
	else {
		for (int i = 0; i < brain._index; i++)
			ost << brain._ideas[i] << std::endl;
	}
	return out;
}