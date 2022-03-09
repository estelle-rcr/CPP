/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:04:16 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/09 11:09:34 by erecuero         ###   ########.fr       */
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
		std::ofstream	file(this->getName().c_str(), std::ofstream::out);
		if (file.is_open())
		{
			file	<< "                                                    .     " << std::endl

					<< "                     ...;%@@@@@%%:;;;;,..                 " << std::endl;
			file.close();
			return (true);
		}
	}
	return (false);
}
