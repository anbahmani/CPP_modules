/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 19:41:16 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/18 20:02:14 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>
# include <deque>
# include <vector>

template<typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T> {
	
	public :
		
		MutantStack(void) {
			return ;
		}

		MutantStack(const MutantStack &mstack) {
			*this = mstack;
			return ;
		}

		~MutantStack(void) {
			return;
		}

		MutantStack &operator=(const MutantStack &mstack) {
			this->c = mstack.c;
			return *this;
		}
		
		typedef typename std::stack<T, Container>::container_type::iterator iterator;

		iterator begin(void) {
			return (this->c.begin());
		}

		iterator end(void) {
			return (this->c.end());
		}
};

#endif