/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:52:14 by abahmani          #+#    #+#             */
/*   Updated: 2022/09/29 16:14:22 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl {
	
	private :
		void _debug(void);
		void _info(void);
		void _warning(void);
		void _error(void);

	public :
		Harl(void);
		~Harl(void);
		void complain(std::string level);
};

typedef struct s_level {
	void (Harl::*p)(void);
	std::string level;
} t_level;

#endif