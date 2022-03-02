/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:04:31 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/02 13:48:28 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__DOG_HPP__
# define __DOG_HPP__

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {

	private:

	public:
		Dog();
		Dog( Dog const & src );
		~Dog();

		Dog & operator=( Dog const & rhs );

		virtual void makeSound(void) const;

};

#endif
