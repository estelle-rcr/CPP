/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:16:11 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/16 14:01:14 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>
#include "../includes/ScalarConvesion.hpp"

bool	isNumeric( std::string source ) {
	
	int size = source.length();
	
	for (int i = 0; i < size; i++) {
		if (isdigit(source[i]) == false)
			return false;
	}
	return true;
}

bool	isNegativeInt( std::string source ) {
	
	int size = source.length();
	
	if (isalpha(source[0]) && source.find('-', 0) && isNumeric(source.substr(1, size - 1)))
		return true;
	return false;
}

bool	isFloat( std::string source) {

	int size = source.length();

	if (source.find("f") != 1)
		return false;
	else if (source.find(".") != 1)
		return false;
	else {
		for (int i = 0; i < size; i++) {
			if (isalpha(source[i]) && source[i] != 'f' && source[i] != '.')
				return false;
		}
	}
	return true;
}

bool	isDouble( std::string source) {
	
}


int	checkSource(std::string source) {
	
	int size = source.length();
	if (isNumeric(source) || isNegativeInt(source)) 
		return 1;
	else if (size == 1 && isascii(source[0]))
		return 0;
	else if (source.compare("-inff") || source.compare("+inff") || source.compare("nanf"))
		return 2;
	else if (source.compare("-inf") || source.compare("+inf") || source.compare("nan"))
		return 3;
	else if (isFloat(source))
		return 2;
	else if (isDouble(source))
		return 3;
}





int main (int ac, char **av) {

	if (ac != 2)
		std::cout << "Recommended use is: ./convert <int/float/double/char>" << std::endl;
	std::string source = av[1];
	int type = checkSource(source);




	/*	bool	(*f[4])(std::string source) = {
			&toChar,
			&toInt,
			&toDouble,
			&toFloat
		};
		*/
	
}