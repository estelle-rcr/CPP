/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:09:00 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/02 17:50:38 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__BUREAUCRAT_HPP__
# define __BUREAUCRAT_HPP__

#include <iostream>


class Bureaucrat {

	private:
		std::string	const	_name;
		int					_rank;

	public:
		class GradeTooHighException : public std::exception {

			public:
				virtual const char *what() const throw() {
					return ("Can't increment, rank is already the highest rank.");
				}
		};
		class GradeTooLowException : public std::exception {

			public:
				virtual const char *what() const throw() {
					return ("Can't decrement, rank is already the lowest rank.");
				}
		};

		Bureaucrat( void );
		Bureaucrat( std::string name, int starting_rank) throw(Bureaucrat::GradeTooHighException, Bureaucrat::GradeTooLowException);
		Bureaucrat( Bureaucrat const & src );
		Bureaucrat & operator=( Bureaucrat const & rhs );
		~Bureaucrat();

		std::string const & getName() const;
		int 				getRank() const;
		void				incrementRank() throw(Bureaucrat::GradeTooHighException);
		void				decrementRank() throw(Bureaucrat::GradeTooLowException);
};

	std::ostream & operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif
