/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:13:12 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/10 16:52:02 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__INTERN_HPP__
# define __INTERN_HPP__

#include <iostream>
#include <string>
#include "Form.hpp"

class Intern {

		class FormNotExisting : public std::exception {

			public:
				virtual const char *what() const throw() {
					return ("This form doesn't exist.");
				}
		};

	private :

	public :
		Intern( void );
		Intern( Intern const & src );
		virtual ~Intern();
		Intern & operator=( Intern const & rhs );

		Form *makeForm(std::string const formName, std::string const target);

};

#endif