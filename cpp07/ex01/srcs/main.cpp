/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:53:17 by erecuero          #+#    #+#             */
/*   Updated: 2022/04/07 16:27:18 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Iter.hpp"

int main( void ) {

	std::cout << "\n>>> STRING TESTS: <<<" << std::endl;
	std::string strArr[3] = {"Hello ", "my name is ", "Estelle!"};
	std::cout << "\n>>> Display test: <<<" << std::endl;
	iter(strArr, 3, displayArrayValue);
	std::cout << "\n>>> Additional test: <<<" << std::endl;
	iter(strArr, 3, additionalArrayValue);

	std::cout << "\n>>> INT TESTS: <<<" << std::endl;
	int	intArray[4] = {0, 1, 2, 3};
	std::cout << "\n>>> Display test: <<<" << std::endl;
	iter(intArray, 4, displayArrayValue);
	std::cout << "\n>>> Additional test: <<<" << std::endl;
	iter(intArray, 4, additionalArrayValue);

	std::cout << "\n>>> CONST INT TESTS: <<<" << std::endl;
	int const	intConstArray[6] = {4, 5, 6, 7, 8, 9};
	std::cout << "\n>>> Display test: <<<" << std::endl;
	iter(intConstArray, 6, displayArrayValue);
	std::cout << "\n>>> Additional test: <<<" << std::endl;
	iter(intConstArray, 6, additionalArrayValue);

	return 0;
}
