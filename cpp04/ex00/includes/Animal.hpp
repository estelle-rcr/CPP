/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:00:19 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/02 13:49:14 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__ANIMAL_HPP__
# define __ANIMAL_HPP__

#include <iostream>

class Animal {

	protected:
		std::string	_type;

	public:
		Animal();
		Animal( std::string _type );
		Animal( Animal const & src );
		virtual ~Animal();

		virtual void makeSound(void) const;
		std::string	getType( void ) const;
		Animal & operator=( Animal const & rhs );
};

#endif
