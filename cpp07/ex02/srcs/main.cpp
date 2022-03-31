/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:53:17 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/30 16:39:45 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Array.hpp"

int main(void)
{
	srand(time(NULL));
	{
		std::cout << "\n>>> TEST ON EMPTY ARRAY: <<<" << std::endl;
		try {
			Array<int> test;
			std::cout << "\n---OK---" << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << "\n---KO---" << e.what() << '\n';
		}
	}
	{
		std::cout << "\n>>> TEST ON INT ARRAY: <<<" << std::endl;
		try {
			int size = 18;
			Array<int> intArray1(size);
			std::cout << ">> Display initialized array: " << std::endl;
			std::cout << "intArray1: ";
			for (int i = 0; i < size; i++) {
				std::cout << intArray1[i] << " - ";
			}
			std::cout << std::endl << std::endl;
			std::cout << ">> Display first array with random : " << std::endl;
			std::cout << "intArray1: ";
			for (int i = 0; i < size; i++) {
				intArray1[i] = rand();
				std::cout << intArray1[i] << " - ";
			}
			std::cout << std::endl;
			std::cout << "\n---OK---" << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << "\n---KO---" << e.what() << '\n';
		}
	}

	{
		std::cout << "\n>>> TEST ON USING NEW WITH INT ARRAY: <<<" << std::endl;
		try {
			int size = 8;
			std::cout << ">> Create an int array with random integers: " << std::endl;
			int * intArray2 = new int(size);
			std::cout << "intArray2: ";
			for (int i = 0; i < size; i++) {
				intArray2[i] = rand();
				std::cout << intArray2[i] << " - ";
			}
			std::cout << std::endl;
			delete intArray2;
			std::cout << "\n---OK---" << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << "\n---KO---" << e.what() << '\n';
		}
	}
	{
		std::cout << "\n>>> TEST ON USING COPY CONSTRUCTOR WITH INT ARRAY: <<<" << std::endl;
		try {
			int size = 8;
			std::cout << ">> Create an int array with random integers: " << std::endl;
			Array<int> intArray1(size);
			std::cout << "intArray1: ";
			for (int i = 0; i < size; i++) {
				intArray1[i] = rand();
				std::cout << intArray1[i] << " - ";
			}
			std::cout << std::endl;
			Array<int> intArray2(intArray1);
			std::cout << "intArray2 (after copy): ";
			for (int i = 0; i < size; i++) {
				std::cout << intArray2[i] << " - ";
			}
			std::cout << std::endl;
			std::cout << "\n---OK---" << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << "\n---KO---" << e.what() << '\n';
		}
	}
	{
		std::cout << "\n>>> PREVIOUS TESTS WITH CHAR ARRAY <<<" << std::endl;
		try {
			int size = 5;
			std::cout << ">> Create an int array with random integers: " << std::endl;
			Array<char> intArray1(size);
			std::cout << "intArray1: ";
			for (int i = 0; i < size; i++) {
				intArray1[i] = 'A' + (random() % 26);
				std::cout << intArray1[i] << " - ";
			}
			std::cout << std::endl << std::endl;
			std::cout << ">>Then create an int array by copy of the first array" << std::endl;
			Array<char> intArray2(intArray1);
			std::cout << "intArray2 (after copy): ";
			for (int i = 0; i < size; i++) {
				std::cout << intArray2[i] << " - ";
			}
			std::cout << std::endl;
			std::cout << "\n---OK---" << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << "\n---KO---" << e.what() << '\n';
		}
	}
	{
		std::cout << "\n>>> TEST ON OUT OF RANGE INPUT: <<<" << std::endl;
		try {
			int size = 8;
			std::cout << ">> Create an int array of size 8 and select position 9" << std::endl;
			Array<int> intArray2(size);
			intArray2[9];
			std::cout << std::endl;
			std::cout << "\n---OK---" << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << "\n---KO---" << e.what() << '\n';
		}
	}
	return 0;
}