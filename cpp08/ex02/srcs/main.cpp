/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 20:05:48 by erecuero          #+#    #+#             */
/*   Updated: 2022/04/07 17:12:33 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MutantStack.hpp"
# include <algorithm>
# include <stdlib.h>
# include <list>

int main(void) {

	{
		std::cout << ">>> TEST FROM SUBJECT (MY MUTANTSTACK): <<<" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::stack<int> s(mstack);
	}
	{
		std::cout << ">>> TEST FROM SUBJECT WITH A LIST: <<<" << std::endl;
		std::list<int> intList;
		intList.push_back(5);
		intList.push_back(17);
		std::cout << intList.back() << std::endl;
		intList.pop_back();
		std::cout << intList.size() << std::endl;
		intList.push_back(3);
		intList.push_back(5);
		intList.push_back(737);
		//[...]
		intList.push_back(0);
		std::list<int>::iterator it = intList.begin();
		std::list<int>::iterator ite = intList.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::list<int> s(intList);
	}
	{
		std::cout << ">>> ADDITIONNAL TESTS (EMPTY): <<<" << std::endl;
		MutantStack<std::string> mystack;

		mystack.push("First sentence");
		mystack.push("Second sentence");

		std::cout << "mystack contains:\n";
		while (!mystack.empty())
		{
			std::cout << mystack.top() << '\n';
			mystack.pop();
		}
	}
	{
		std::cout << ">>> ADDITIONNAL TESTS (REVERSED ITERATORS): <<<" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		std::cout << "Start iterator:" << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << "Start reversed iterator:" << std::endl;
		MutantStack<int>::reverse_iterator rit = mstack.rbegin();
		MutantStack<int>::reverse_iterator rite = mstack.rend();
		++rit;
		--rit;
		while (rit != rite)
		{
		std::cout << *rit << std::endl;
		++rit;
		}
	}
	return 0;
}
