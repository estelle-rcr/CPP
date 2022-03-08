/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:10:29 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/08 11:36:54 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__FIXED_HPP__
# define __FIXED_HPP__

#include <iostream>
#include <math.h> 

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

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		float toFloat( void ) const;
		int toInt( void ) const;

		Fixed & operator=( Fixed const & rhs );

		bool	operator>( const Fixed &fixed ) const;
		bool	operator<( const Fixed &fixed ) const;
		bool	operator>=( const Fixed &fixed ) const;
		bool	operator<=( const Fixed &fixed ) const;
		bool	operator==( const Fixed &fixed ) const;
		bool	operator!=( const Fixed &fixed ) const;

		Fixed	operator+( const Fixed &fixed );
		Fixed	operator-( const Fixed &fixed );
		Fixed	operator*( const Fixed &fixed );
		Fixed	operator/( const Fixed &fixed );

		Fixed&	operator++( void );
		Fixed	operator++( int );
		Fixed&	operator--( void );
		Fixed	operator--( int );

		static Fixed &			min( Fixed & a, Fixed & b );
		static const Fixed &	min( const Fixed & a, const Fixed & b );
		static Fixed &			max( Fixed & a, Fixed & b);
		static const Fixed &	max( const Fixed & a, const Fixed & b);

};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif
