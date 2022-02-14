/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:32:54 by erecuero          #+#    #+#             */
/*   Updated: 2022/02/14 14:02:21 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <iostream>


int	main(void) {

	std::string		str("HI THIS IS BRAIN");
	std::string*	strPtr = &str;
	std::string&	strRef = str;

	std::cout << "Memory address of the string variable: " << &str << std::endl;
	std::cout << "Memory address held by stringPTR: " << strPtr << std::endl;
	std::cout << "Memory address held by stringREF: " << &strRef << std::endl;
	std::cout << "Value of the string variable: " << str << std::endl;
	std::cout << "Value pointed to by stringPTR: " << *strPtr << std::endl;
	std::cout << "Value pointed to by stringREF: " << strRef << std::endl;
	return 0;
}
