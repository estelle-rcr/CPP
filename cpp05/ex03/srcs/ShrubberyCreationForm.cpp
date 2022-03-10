/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:04:16 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/10 17:12:12 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) :
	Form("shrubbery creation", 145, 137), _target(target) {
//	std::cout << "Target set to " << this->_target << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src ) :
	Form(src), _target(src._target) {
	*this = src;
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

bool	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {

	if (this->checkConditions(executor))
	{
		std::string fileName = this->getTarget() + "_shrubbery";
		std::ofstream	file(fileName.c_str(), std::ofstream::out);
		if (file.is_open())
		{
			file << "       _-_       " << std::endl
					<< "    /~~   ~~\\   " << std::endl
					<< " /~~         ~~\\" << std::endl
					<< "{               }" << std::endl
					<< " \\  _-     -_  / " << std::endl
					<<"   ~  \\ //  ~   " << std::endl
					<<"_- -  | | _- _  " << std::endl
					<<" _ -  | |   -_   " << std::endl
					<<"      // \\      " << std::endl;
			file.close();
			return true;
		}
	}
	return false;
}
