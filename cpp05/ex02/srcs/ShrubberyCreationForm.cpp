/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:04:16 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/08 18:18:49 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : 
	Form("Presidential Pardon", 145, 137), _target(target) {

	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src ) :
	Form(src), _target(src._target) {
//	*this = src;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

	return ;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs ) {

	if ( this != &rhs )
	{
		Form::operator=(rhs);
	}
	return *this;
}

std::string	ShrubberyCreationForm::getTarget( void ) const {

	return this->_target;
}

bool	ShrubberyCreationForm::execute(Bureaucrat const & executor) {

	if (this->checkConditions(executor))
	{
		std::cout << "Create a fucking doc" << std::endl;
	}
}