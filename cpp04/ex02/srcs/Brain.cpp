/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:29:43 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/01 16:08:44 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {

	std::cout << "Brain default constructor called" << std::endl;
	return ;
}

Brain::Brain( Brain const & src ) {
		
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
	return ;
}

Brain::~Brain() {

	std::cout << "Brain destructor called" << std::endl;
	return ;
}

Brain &	Brain::operator=( Brain const & rhs ) {

	for(int i = 0; i < 100; i++) {
		this->_ideas[i] = rhs._ideas[i];
	}
	return (*this);
}

std::string	&Brain::getIdea( int nb ) {

	return this->_ideas[nb];
}

void		Brain::setIdea( int nb, std::string idea ) {

	this->_ideas[nb] = idea;
}
