/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:04:05 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/31 17:28:11 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__ROBOTOMYREQUESTFORM_HPP__
# define __ROBOTOMYREQUESTFORM_HPP__

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

class Bureaucrat;

class RobotomyRequestForm : public Form {

	private:
		std::string	_target;

	public:
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( RobotomyRequestForm const & src );
		~RobotomyRequestForm();
		RobotomyRequestForm & operator=( RobotomyRequestForm const & rhs );

		std::string	getTarget( void ) const;
		virtual bool		execute(Bureaucrat const & executor) const;
};

#endif
