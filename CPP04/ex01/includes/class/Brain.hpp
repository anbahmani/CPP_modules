/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:06:22 by abahmani          #+#    #+#             */
/*   Updated: 2022/11/12 20:04:18 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain {
	private :
		std::string _ideas[100];

	public :
		Brain(void);
		Brain(const Brain& brain);
		~Brain(void);
		Brain &operator=(const Brain& brain);
	
};

#endif