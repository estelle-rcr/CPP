/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:22:56 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/25 18:12:22 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _rank(150) {

	return ;
}

Bureaucrat::Bureaucrat(std::string name, int rank) : _name(name)
{
	if (rank < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (rank > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_rank = rank;
}

Bureaucrat::Bureaucrat( Bureaucrat const & src )  : _name(src.getName())
{
	*this = src;
}

Bureaucrat::~Bureaucrat() {

	return ;
}

Bureaucrat & Bureaucrat::operator=( Bureaucrat const & rhs ) {

	if ( this != &rhs ) {
		this->_rank = rhs.getRank();
	}
	return *this;
}

std::ostream &	operator<<( std::ostream & o, Bureaucrat const & rhs ) {

	o << rhs.getName() << ", bureaucrate grade " << rhs.getRank();
	return o;
}

std::string const & Bureaucrat::getName() const {

	return (this->_name);
}

int 				Bureaucrat::getRank() const {

	return (this->_rank);
}

void	Bureaucrat::incrementRank() {

	if ((this->_rank - 1) < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_rank--;
}

void	Bureaucrat::decrementRank() {


	if ((this->_rank + 1) > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_rank++;
}
