/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 20:44:43 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/23 22:25:11 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <cstdlib>
#include <iostream>
#include <string>

class UndefinedClass : public std::exception {

	public:
		virtual const char *what() const throw() {
			return ("The class is undefined.");
		}
};

class Base {

	public :
		virtual ~Base(){};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};
class D {};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif
