/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 23:41:33 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/18 19:34:51 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>
# include <algorithm>

class Span {
	
	public :
		std::vector<int> _v;

	public :
		Span(void);
		Span(unsigned int n);
		Span(const Span &span);
		~Span(void);
		Span &operator=(const Span &span);
		void addNumber(int nb);
		void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		unsigned int shortestSpan(void);
		unsigned int longestSpan(void);
		std::vector<int>::iterator getBegin(void);
		std::vector<int>::iterator getEnd(void);
		
		class ContainerFullException : public std::exception{
			virtual const char *what() const throw();
		};

		class SpanNotFoundException : public std::exception{
			virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream& os, const Span &span);

#endif