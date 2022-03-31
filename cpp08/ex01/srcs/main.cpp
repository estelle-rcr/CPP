/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 19:18:35 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/31 20:22:25 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main ( void ) {

	{
		std::cout << ">>> TEST SPAN ADD NEW NUMBERS OUT OF RANGE (EXCEPTION) <<<" << std::endl;
		Span span = Span(4);

		span.addNumber(18);
		span.addNumber(45);
		span.addNumber(512);
		span.addNumber(-1);
		try {
			span.addNumber(10);
		} 
		catch(std::exception & e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << ">>> The vector is: ";
		std::cout << span << std::endl;
	}
	{
		std::cout << std::endl <<">>> TEST ON EMPTY VECTOR <<<" << std::endl;
		Span span = Span(2);
		std::cout << ">>> The vector is: ";
		std::cout << span << std::endl;
		try {
			std::cout << std::endl << "Error exception on shortest span = " << span.shortestSpan() << std::endl;
		} 
		catch(std::exception & e) {
			std::cout << e.what() << std::endl;
		}
		try {
			std::cout << std::endl << "Error exception on longest span = " << span.longestSpan() << std::endl;
		} 
		catch(std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl <<">>> TEST ON VECTOR WITH 1 ITEM <<<" << std::endl;
		Span span = Span(2);
		span.addNumber(18);
		std::cout << ">>> The vector is: ";
		std::cout << span << std::endl;
		try {
			std::cout << std::endl << "Error exception on shortest span = " << span.shortestSpan() << std::endl;
		} 
		catch(std::exception & e) {
			std::cout << e.what() << std::endl;
		}
		try {
			std::cout << std::endl << "Error exception on longest span = " << span.longestSpan() << std::endl;
		} 
		catch(std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl <<">>> TEST ON VECTOR WITH 2 ITEMS (OK) <<<" << std::endl;
		Span span = Span(2);
		span.addNumber(18);
		span.addNumber(20);
		std::cout << ">>> The vector is: ";
		std::cout << span << std::endl;
		try {
			std::cout << std::endl << "Error exception on shortest span = " << span.shortestSpan() << std::endl;
		} 
		catch(std::exception & e) {
			std::cout << e.what() << std::endl;
		}
		try {
			std::cout << std::endl << "Error exception on longest span = " << span.longestSpan() << std::endl;
		} 
		catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	}
	{
		std::cout << std::endl <<">>> TEST ON VECTOR WITH 2 ITEMS OF SAME VALUE <<<" << std::endl;
		Span span = Span(2);
		span.addNumber(0);
		span.addNumber(0);
		std::cout << ">>> The vector is: ";
		std::cout << span << std::endl;
		try {
			std::cout << std::endl << "Error exception on shortest span = " << span.shortestSpan() << std::endl;
		}
		catch(std::exception & e) {
			std::cout << e.what() << std::endl;
		}
		try {
			std::cout << std::endl << "Error exception on longest span = " << span.longestSpan() << std::endl;
		} 
		catch(std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl  << ">>> TEST ON VECTOR WITH 10000 VALUES <<<" << std::endl;
		Span span = Span(10000);
		std::vector<int> vector(10000, 1);
		try {
			span.fillSpan(vector.begin(), vector.end());
		} 
		catch(const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << ">>> The vector is: ";
		std::cout << span << std::endl;
		try {
			span.addNumber(10);
		}
		catch(std::exception & e) {
			std::cout << e.what() << std::endl;
		}
		try {
			std::cout << std::endl << "Error exception on shortest span = " << span.shortestSpan() << std::endl;
		}
		catch(std::exception & e) {
			std::cout << e.what() << std::endl;
		}
		try {
			std::cout << std::endl << "Error exception on longest span = " << span.longestSpan() << std::endl;
		}
		catch(std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
}