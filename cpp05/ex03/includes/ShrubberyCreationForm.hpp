/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:04:08 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/31 17:28:16 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__SHRUBBERYCREATIONFORM_HPP__
# define __SHRUBBERYCREATIONFORM_HPP__

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <fstream>

class Bureaucrat;

class ShrubberyCreationForm : public Form {

	private:
		std::string	_target;

	public:
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		~ShrubberyCreationForm();
		ShrubberyCreationForm & operator=( ShrubberyCreationForm const & rhs );

		std::string	getTarget( void ) const;
		virtual bool		execute(Bureaucrat const & executor) const;
};

#endif
