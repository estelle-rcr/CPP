/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:04:31 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/01 18:30:01 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__DOG_HPP__
# define __DOG_HPP__

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {

//	protected:
//		std::string	_type;

	public:
		Dog();
		Dog( Dog const & src );
		~Dog();

		virtual void makeSound(void) const;
	//	virtual std::string	getType( void ) const;
		Dog & operator=( Dog const & rhs );
};

#endif
