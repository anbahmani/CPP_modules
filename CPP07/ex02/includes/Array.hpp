/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 11:54:59 by abahmani          #+#    #+#             */
/*   Updated: 2022/12/17 16:08:11 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>
# include <iostream>

template <typename T>
class Array {
	
	private :
		T* _array;
		unsigned int _size;
	
	public :
		Array<T>(void) : _array(new T[0]), _size(0) {
			return;
		}

		Array<T>(unsigned int n) : _array(new T[n]), _size(n) {
			for (unsigned int i = 0; i < n; i++)
				this->_array[i] = 0;
			return;
		}
		
		Array<T>(const Array<T> &array) {
			this->_array = new T[array._size];
			this->_size = array._size;
			for (unsigned int i = 0; i < this-> _size; i++)
				this->_array[i] = array._array[i];
		}

		Array<T> &operator=(const Array<T> &array) {
			this->_size = array._size;
			delete [] this->_array;
			this->_array = new T[array._size];
			for (unsigned int i = 0; i < this-> _size; i++)
				this->_array[i] = array._array[i];
			return (*this);
		}

		~Array(void) {
			delete [] this->_array;
		}

		T &operator[](const unsigned int index) {               
			if (index >= this->_size)
				throw std::exception();
			return (this->_array[index]);
		}

		unsigned int size(void) const {
			return (this->_size);
		}

		
}; 

#endif