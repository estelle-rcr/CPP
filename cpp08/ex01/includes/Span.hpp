/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:42:01 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/31 20:21:38 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN_HPP__
# define __SPAN_HPP__

#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <vector>

class Span {
	
	class FullArrayException : public std::exception {

		public:
			virtual const char *what() const throw() {
				return ("Can't add another number, span is full.");
			}
	};

	class SpanDataException : public std::exception {

		public:
			virtual const char *what() const throw() {
				return ("Not enough data available to calculate span.");
			}
	};
	class NumberTooHighException : public std::exception {

		public:
			virtual const char *what() const throw() {
				return ("Can't add as many numbers into span.");
			}
	};

	private:
		std::vector<int>	_data;
		unsigned int		_size;

	public:
		Span( unsigned int size );
		Span( Span const &src );
		~Span();

		Span & operator=(Span const & rhs);

		unsigned int		getSize() const;
		std::vector<int>	getData() const;
		void				getNumbers() const;

		void			addNumber(int nb);

		unsigned int 	shortestSpan();
		unsigned int 	longestSpan() const;

		void	fillSpan(std::vector<int>::iterator it, std::vector<int>::iterator ite);

};

std::ostream & operator<<(std::ostream &o, Span const &rhs);


#endif