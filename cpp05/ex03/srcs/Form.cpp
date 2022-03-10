/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:01:17 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/10 00:41:00 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

Form::Form( void ) : _name("default"), _signRank(150), _execRank(150) {

	return ;
}

Form::Form( std::string const name, int const signRank, int const execRank) : _name(name), _signRank(signRank), _execRank(execRank) {

	if (_signRank < 1 || _execRank < 1)
		throw Form::GradeTooHighException();
	else if (_signRank > 150 || _execRank > 150)
		throw Form::GradeTooLowException();
	else
		this->_signed = false;
	return ;
}

Form::Form( Form const & src ) : _name(src._name), _signRank(src._signed), _execRank(src._execRank) {

	this->_signed = src._signed;
}

Form::~Form() {

	return ;
}

Form &	Form::operator=( Form const & rhs ) {

	if ( this != &rhs )
	{
		this->_signed = rhs.getSigned();
	}
	return *this;
}

std::ostream & operator<<(std::ostream &o, Form const &rhs) {

	o << "Form " << rhs.getName() << " is ";
	if (rhs.getSigned())
		o << "already signed. ";
	else
		o << "not signed yet. ";
	o << "It requires rank " << rhs.getSignRank() << " to be signed ";
	o << "and rank " << rhs.getExecRank() << " to be executed.";
	return o;
}

std::string const &	Form::getName() const {

	return this->_name;
}

bool 				Form::getSigned() const {

	return this->_signed;
}

int					Form::getSignRank() const {

	return this->_signRank;
}
int					Form::getExecRank() const {

	return this->_execRank;
}

void	Form::beSigned(Bureaucrat const & bureaucrat) {

	if (bureaucrat.getRank() > this->_signRank) {
		throw Form::GradeTooLowException();
	}
	else {
		this->_signed = true;
	}
}

bool	Form::checkConditions(Bureaucrat const & executor) const {

	if (this->getExecRank() < executor.getRank()) {
		throw Form::GradeTooLowException();
		return 0;
	}
	else if (!this->getSigned()) {
		throw Form::FormNotSignedException();
		return 0;
	}
	else
		return 1;
}
