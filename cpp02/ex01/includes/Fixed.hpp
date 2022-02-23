/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:10:29 by erecuero          #+#    #+#             */
/*   Updated: 2022/02/23 16:34:42 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__FIXED_HPP__
# define __FIXED_HPP__

#include <iostream>

class Fixed {

	private:
		int		_rawBits;
		static const int	_bits = 8;

	public:
		Fixed( void );
		Fixed( int const i);
		Fixed( float const f);
		Fixed( Fixed const & src );
		~Fixed();

		Fixed & operator=( Fixed const & rhs );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif
