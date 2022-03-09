/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:04:14 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/09 11:10:34 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string target ) :
	Form("Presidential Pardon", 72, 45), _target(target) {

	return ;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src ) :
	Form(src), _target(src._target) {
//	*this = src;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm() {

	return ;
}

RobotomyRequestForm &	RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs ) {

	if ( this != &rhs )
	{
		Form::operator=(rhs);
	}
	return *this;
}

std::string	RobotomyRequestForm::getTarget( void ) const {

	return this->_target;
}

bool	RobotomyRequestForm::execute(Bureaucrat const & executor) {

	if (this->checkConditions(executor))
	{
		std::cout << "TRIIIIIIT " << std::endl;
		if (rand() % 2) {
			std::cout << this->getTarget() << " was robotomized correctly." << std::endl;
			return true;
		}
		else {
			std::cout << " robotomization failed on " << this->getTarget() << std::endl;
			return false;
		}
	}
}
