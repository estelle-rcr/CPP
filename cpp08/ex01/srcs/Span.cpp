/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:44:59 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/31 20:24:37 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( unsigned int size ) : _size(size) {
	return ;
}


Span::Span( Span const &src ) {
	
	*this = src;
	return ;
}

Span::~Span() {
	return ;
}

Span & Span::operator=(Span const & rhs) {

	if ( this != &rhs ) {
		this->_size = rhs.getSize();
		this->_data = rhs.getData();
	}
	return *this;
}

std::ostream & operator<<(std::ostream &o, Span const &rhs) {

	if (rhs.getSize() < 1)
		o << "No data in the vector.";
	else {
		o << "[ ";
		rhs.getNumbers();
		o << "]";
	}
	return o;
}

unsigned int	Span::getSize() const {

	return this->_size;
}

std::vector<int>	Span::getData() const {

	return this->_data;
}

void			Span::getNumbers() const {
	std::vector<int> copy = this->_data;
	std::vector<int>::iterator	it;
	std::vector<int>::iterator	ite = copy.end();

	for (it = copy.begin(); it != ite; ++it) {
		std::cout << *it << " ";
	}
}

void 			Span::addNumber( int nb ) {
	
	if (this->_data.size() < this->_size)
		this->_data.push_back(nb);
	else 
		throw FullArrayException();
}

unsigned int	Span::shortestSpan() {

	if (this->_data.size() <= 1) {
		throw SpanDataException();
	}
	unsigned int dist = this->longestSpan();
	unsigned int tmp;
	std::vector<int> copy = _data;
	std::vector<int>::iterator	it;
	std::vector<int>::iterator	ite = copy.end();
	
	std::sort(copy.begin(), copy.end());
	for (it = copy.begin(); it != ite; ++it)
	{
		tmp = abs(*it - *(it + 1));
		if (tmp < dist)
			dist = tmp;
	}
	return (dist);
}

unsigned int	Span::longestSpan() const {

	if (this->_data.size() <= 1) {
		throw SpanDataException();
	}
	unsigned int max = *std::max_element(this->_data.begin(), this->_data.end());
	unsigned int min = *std::min_element(this->_data.begin(), this->_data.end());
	return (max - min);
}

void	Span::fillSpan(std::vector<int>::iterator it, std::vector<int>::iterator ite) {

	if (this->_data.size() >= this->_size) {
		throw FullArrayException();
	}
	int nb = 0;
	while (it != ite) {
		nb += *it;
		addNumber(nb);
		it++;
	}
}