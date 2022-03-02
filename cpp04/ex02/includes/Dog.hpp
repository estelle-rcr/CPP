/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:04:31 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/02 15:10:44 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__DOG_HPP__
# define __DOG_HPP__

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {

	private:
		Brain*		_brain;

	protected:
		std::string	_type;

	public:
		Dog();
		Dog( Dog const & src );
		~Dog();

		virtual void makeSound(void) const;

		Dog & operator=( Dog const & rhs );
};

#endif
