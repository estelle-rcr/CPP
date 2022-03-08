/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonPresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:04:11 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/08 15:04:12 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : 
	Form("Presidential Pardon", 25, 5), _target(target) {

	return ;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ) :
	Form(src), _target(src._target) {
//	*this = src;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm() {

	return ;
}

PresidentialPardonForm &	PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs ) {

	if ( this != &rhs )
	{
		Form::operator=(rhs);
	}
	return *this;
}

std::string	PresidentialPardonForm::getTarget( void ) const {

	return this->_target;
}

bool	PresidentialPardonForm::execute(Bureaucrat const & executor) {

	if (this->checkConditions(executor))
			std::cout << "Zaphod Beeblebrox forgives " << this->getTarget() << std::endl;
}
