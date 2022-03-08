/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:01:17 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/07 19:03:11 by erecuero         ###   ########.fr       */
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
}  // throw(Form::GradeTooHighException, Form::GradeTooLowException)

Form::Form( Form const & src ) : _name(src._name), _signRank(src._signed), _execRank(src._execRank) {

	this->_signed = src._signed;
}

Form::~Form() {

	return ;
}

Form & Formoperator=( Form const & rhs ) {

	if ( this != &rhs )
	{
		this->_isSigned = rhs.getSignGrade();
	}
	return *this;
}

std::string const & getName() const;
bool 				getSigned() const;
int					getSignRank() const;
int					getExecRank() const;

void	beSigned(Bureaucrat const & bureaucrat);


	std::ostream & operator<<(std::ostream &o, Form const &rhs);
