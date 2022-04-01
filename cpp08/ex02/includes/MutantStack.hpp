/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 20:05:41 by erecuero          #+#    #+#             */
/*   Updated: 2022/04/01 20:16:43 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANTSTACK_HPP__
# define __MUTANTSTACK_HPP__

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
	private:

	public:
		MutantStack (void) {};
		MutantStack(const MutantStack &src) {
			*this = src;
		}
		~MutantStack(void) {};

		MutantStack &operator=(const MutantStack &src) {
			if (*this != &src)
				*this->c = src.c;
			return *this;
		}

		typedef typename std::stack<T>::container_type::iterator			iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator	reverse_iterator;

		iterator	begin() {
			return	this->c.begin();
		}
		iterator	end() {
			return	this->c.end();
		}
		iterator	rbegin() {
			return	this->c.rbegin();
		}
		iterator	rend()  {
			return	this->c.rend();
		}
};



#endif
