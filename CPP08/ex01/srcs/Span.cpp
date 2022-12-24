/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 14:00:37 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/18 19:34:44 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

Span::Span(void){
	_v.reserve(0);
	return;
}

Span::Span(unsigned int n) {
	_v.reserve(n);
	return;
}

Span::Span(const Span &span) {
	*this = span;
}

Span::~Span(void) {
	return;
}

Span& Span::operator=(const Span &span) {
	this->_v = span._v;
	return (*this);
}

const char *Span::ContainerFullException::what() const throw(){
			return ("Error: The container is full.");
};

const char *Span::SpanNotFoundException::what() const throw(){
			return ("Error: The container do not have enough element to search a span.");
};

void Span::addNumber(int nb){
	if (this->_v.capacity() == this->_v.size())
		throw Span::ContainerFullException();
	else
		this->_v.push_back(nb);
}

unsigned int Span::shortestSpan(void){
	if (this->_v.size() <= 1)
		throw Span::SpanNotFoundException();
	std::vector<int> v(_v);
	std::sort(v.begin(), v.end());
	unsigned int count = (*(v.begin() + 1)) - (*v.begin());
	for (std::vector<int>::iterator it = v.begin() + 1; it != v.end() - 1; it++) {
		if ((*(it + 1) - *it) < static_cast<int>(count))
			count = *(it + 1) - *it;
	}
	return (count);
}

unsigned int Span::longestSpan(void){
	if (this->_v.size() <= 1)
		throw Span::SpanNotFoundException();
	std::vector<int> v(_v);
	std::sort(v.begin(), v.end());
	return ((*(v.end() - 1)) - (*v.begin()));
}

std::vector<int>::iterator Span::getBegin(void){
	return this->_v.begin();
}

std::vector<int>::iterator Span::getEnd(void){
	return this->_v.end();
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end){
	std::vector<int>::iterator it;
	if (_v.size() + static_cast<unsigned int>(end - begin) >= _v.capacity())
		throw Span::ContainerFullException();
	else
		_v.insert(_v.end(), begin, end);
}