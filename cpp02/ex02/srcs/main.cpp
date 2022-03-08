/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:08:35 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/08 11:53:46 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main( void ) {

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << ">>> test increment post & pre:" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << ">>> a & b values:" << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << ">>> max and min:" << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << ">>> all operations:" << std::endl;
	std::cout << a + b << std::endl;
	std::cout << a - b << std::endl;
	std::cout << a * b << std::endl;
	std::cout << a / b << std::endl;
	std::cout << ">>> comparisons:" << std::endl;
	std::cout << (a > b) << std::endl;
	std::cout << (b == b) << std::endl;
	return 0;
}
