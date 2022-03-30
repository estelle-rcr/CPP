/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:53:17 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/30 18:08:19 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"
# include <algorithm>
# include <stdlib.h>
# include <vector>
# include <array>

int main( void ) {

	int nb;
	std::cout << "\n>>> Test on array: <<<" << std::endl;
	std::array<int, 6> a = { 1, 2, 3, 25, 3, 42};
	nb = 3;

	try {
		int i = easyFind(a, nb);
		std::cout << nb << " is in the list at position " << i << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::cout << "\n>>> Test on array: <<<" << std::endl;
	std::vector<int> v;
	v.push_back(25);
	v.push_back(13);
	v.push_back(250);
	v.push_back(13);
	nb = 13;

	try {
		int i = easyFind(v, nb);
		std::cout << nb << " is in the list at position " << i << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
