/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:53:17 by erecuero          #+#    #+#             */
/*   Updated: 2022/04/07 16:25:09 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "whatever.hpp"

int main( void ) {

	std::cout << ">>> Test main given in subject: <<<" << std::endl;
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << "\n>>> Additional tests: <<<" << std::endl;
	c = "chaine1";
	d = "chaine1";
	swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	float e = 42.2f;
	float f = 42.2;
	swap(f, e);
	std::cout << "c = " << f << ", d = " << e << std::endl;
	std::cout << "min( c, d ) = " << ::min( f, e ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( f, e ) << std::endl;

	return 0;
}
