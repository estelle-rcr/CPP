/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:00:19 by erecuero          #+#    #+#             */
/*   Updated: 2022/02/28 13:50:24 by erecuero         ###   ########.fr       */
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
		Animal( std::string type );
		Animal( Animal const & src );
		~Animal();

		virtual void makeSound(void) const;
		virtual std::string	getType( void ) const;

};

#endif
