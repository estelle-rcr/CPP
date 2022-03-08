/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:09:00 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/08 14:46:00 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__BUREAUCRAT_HPP__
# define __BUREAUCRAT_HPP__

#include <iostream>


class Bureaucrat {

		class GradeTooHighException : public std::exception {

			public:
				virtual const char *what() const throw() {
					return ("Rank is too high to be incremented.");
				}
		};
		class GradeTooLowException : public std::exception {

			public:
				virtual const char *what() const throw() {
					return ("Rank is too low to be decremented.");
				}
		};

	private:
		std::string	const	_name;
		int					_rank;

	public:
		Bureaucrat( void );
		Bureaucrat( std::string name, int starting_rank);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();
		Bureaucrat & operator=( Bureaucrat const & rhs );

		std::string const & getName() const;
		int 				getRank() const;
		void				incrementRank();
		void				decrementRank();
};

	std::ostream & operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif
