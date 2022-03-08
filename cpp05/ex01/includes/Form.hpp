/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:01:07 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/07 18:44:36 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__FORM_HPP__
# define __FORM_HPP__

#include <iostream>
#include "Bureaucrat.hpp"

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

	private:
		std::string	const	_name;
		bool				_signed;
		int const			_signRank;
		int const			_execRank;


	public:
		Form( void );
		Form( std::string const name, int const signRank, int const execRank);  // throw(Form::GradeTooHighException, Form::GradeTooLowException)
		Form( Form const & src );
		~Form();
		Form & operator=( Form const & rhs );

		std::string const & getName() const;
		bool 				getSigned() const;
		int					getSignRank() const;
		int					getExecRank() const;

		void	beSigned(Bureaucrat const & bureaucrat);
};

	std::ostream & operator<<(std::ostream &o, Form const &rhs);

#endif
