/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 18:40:05 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/23 15:47:30 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__SCALAR_HPP__
# define __SCALAR_HPP__

#include <iostream>
#include <string>
#include <istream>
#include <cstdlib>
#include <cfloat>
#include <climits>
#include <cmath>
#include <ctype.h>
#include <iomanip>

class Scalar {

	class WrongFormat : public std::exception {

		public:
			virtual const char *what() const throw() {
				return ("This entry doesn't match any known type.");
			}
	};

	private :

		double				_entry;
		std::string			_source;
		char				_char;
		int					_int;
		double				_double;
		float				_float;

	public :
		Scalar( char *source );
		Scalar( Scalar const & src );
		~Scalar();
		Scalar & operator=( Scalar const & rhs );

		char	getChar() const;
		int		getInt() const;
		float	getFloat() const;
		double	getDouble() const;
		std::string	getSource() const;

		void	setChar(double entry);
		void	setInt(double entry);
		void	setFloat(double entry);
		void	setDouble(double entry);
		void	setSource(char *entry);

		void 	printChar(std::ostream &o) const;
		void 	printInt(std::ostream &o) const;
		void 	printFloat(std::ostream &o) const;
		void 	printDouble(std::ostream &o) const;

		bool	checkChar(char *entry);
		bool	checkInt(char *entry);
		bool	checkFloat(char *entry);
		bool	checkDouble(char *entry);

};

std::ostream	&operator<<(std::ostream &o, Scalar const &i);

#endif
