/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:53:13 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/30 13:35:55 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WHATEVER_HPP__
# define __WHATEVER_HPP__

#include <iostream>

template < typename T >
T const & max( T const & x, T const & y) {
	return ( x > y ? x : y );
}

template < typename T >
T const & min( T const & x, T const & y) {
	return ( x < y ? x : y );
}

template < typename T >
void	swap(T & x, T & y) {
	T	swap = x;
	x = y;
	y = swap;
}

#endif
