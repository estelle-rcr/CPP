/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:53:17 by erecuero          #+#    #+#             */
/*   Updated: 2022/04/07 17:02:35 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "EasyFind.hpp"

int main( void ) {

	std::cout << "\n>>> Test on a vector: <<<" << std::endl;
	std::vector<int> v;
	v.push_back(25);
	v.push_back(13);
	v.push_back(250);
	v.push_back(13);
	int nb = 13;

	try {
		int i = easyFind(v, nb);
		std::cout << i << " is in the list" << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		int i = easyFind(v, 55);
		std::cout << i << " is in the list" << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}


	std::cout << "\n>>> Test on a list: <<<" << std::endl;
	std::list<int> l;
	l.push_back(25);
	l.push_back(13);
	l.push_back(250);
	l.push_back(13);
	nb = 13;

	try {
		int i = easyFind(l, nb);
		std::cout << i << " is in the list " << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		int i = easyFind(l, 55);
		std::cout << i << " is in the list" << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
