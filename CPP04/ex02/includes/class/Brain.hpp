/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:06:22 by abahmani          #+#    #+#             */
/*   Updated: 2022/11/20 04:02:07 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

# define NB_IDEAS_MAX 100

class Brain {
	private :
		std::string *_ideas;
		int _index;
		bool _start_forget;

	public :
		Brain(void);
		Brain(const Brain& brain);
		~Brain(void);
		Brain &operator=(const Brain& brain);
		void add_idea(std::string idea);
		void print_ideas(void);
};

#endif