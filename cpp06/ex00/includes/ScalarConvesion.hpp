/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvesion.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 18:40:05 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/11 18:47:18 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__SCALARCONVERSION_HPP__
# define __SCALARCONVERSION_HPP__

#include <iostream>

class ScalarConversion {

		class NonDisplayable : public std::exception {

			public:
				virtual const char *what() const throw() {
					return ("Non displayable");
				}
		};
		class Impossible : public std::exception {

			public:
				virtual const char *what() const throw() {
					return ("impossible");
				}
		};

	private :
		enum _type { Char = 1, Int, Float, Double };

	public :
		ScalarConversion( std::string source );
		ScalarConversion( ScalarConversion const & src );
		~ScalarConversion();
		ScalarConversion & operator=( ScalarConversion const & rhs );


		int		getType() const;
		bool	toChar(std::string source);
		bool	toInt(std::string source);
		bool	toDouble(std::string source);
		bool	toFloat(std::string source);

};

#endif