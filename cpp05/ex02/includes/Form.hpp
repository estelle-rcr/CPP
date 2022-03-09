/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:01:07 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/09 11:14:20 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__FORM_HPP__
# define __FORM_HPP__

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

		class GradeTooHighException : public std::exception {

			public:
				virtual const char *what() const throw() {
					return ("Rank is too high.");
				}
		};
		class GradeTooLowException : public std::exception {

			public:
				virtual const char *what() const throw() {
					return ("Rank is too low.");
				}
		};
		class FormNotSignedException : public std::exception {

			public:
				virtual const char *what() const throw() {
					return ("Form is not signed.");
				}
		};

	private:
		std::string	const	_name;
		bool				_signed;
		int const			_signRank;
		int const			_execRank;


	public:
		Form( void );
		Form( std::string const name, int const signRank, int const execRank);
		Form( Form const & src );
		virtual ~Form();
		Form & operator=( Form const & rhs );

		std::string const & getName() const;
		bool 				getSigned() const;
		int					getSignRank() const;
		int					getExecRank() const;

		void			beSigned(Bureaucrat const & bureaucrat);
		bool			checkConditions(Bureaucrat const & executor);
		virtual bool	execute(Bureaucrat const & executor) const = 0;
};

	std::ostream & operator<<(std::ostream &o, Form const &rhs);

#endif
