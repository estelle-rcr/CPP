/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:53:13 by erecuero          #+#    #+#             */
/*   Updated: 2022/04/19 00:33:06 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_HPP__
# define __ARRAY_HPP__

#include <iostream>

template <typename T>
class Array {

		class IndexException : public std::exception {

			public:
				virtual const char *what() const throw() {
					return ("Invalid index");
				}
		};

	private :
		T				*_array;
		unsigned int	_size;

	public :
		Array( void ) : _array(0), _size(0) {};
		Array( unsigned int n ) : _size(n) {
			_array = new T[n];
			for (unsigned int i = 0; i < _size; i++)
				this->_array[i] = 0;
		};
		Array( const Array &src ) : _array(NULL) {
			*this = src;
		}
		~Array( void ) {
			delete[] this->_array;
		}

		unsigned int getSize( void ) const {
			return (this->_size);
		}

		Array	&operator=(const Array &rhs) {
			this->_size = rhs.getSize();
			if (this->_array != NULL)
				delete[] this->_array;
			this->_array = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++) {
				this->_array[i] = rhs._array[i];
			}
			return *this;
		}

		T	&operator[](std::size_t i)	{
			if (i >= this->_size)
				throw IndexException();
			return (this->_array[i]);
		}
		T	operator[](std::size_t i) const	{
			if (i >= this->_size)
				throw IndexException();
			return (this->_array[i]);
		}

};


#endif
