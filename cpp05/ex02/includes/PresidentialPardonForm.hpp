/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:51:01 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/08 18:29:31 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__PRESIDENTIALPARDONFORM_HPP__
# define __PRESIDENTIALPARDONFORM_HPP__

#include <iostream>
#include "./Bureaucrat.hpp"
#include "./Form.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form {

	private:
		std::string	_target;

	public:
		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( PresidentialPardonForm const & src );
		~PresidentialPardonForm();
		PresidentialPardonForm & operator=( PresidentialPardonForm const & rhs );

		std::string	getTarget( void ) const;
		virtual bool		execute(Bureaucrat const & executor);
};

#endif
