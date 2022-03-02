/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:00:19 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/02 15:09:05 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__AANIMAL_HPP__
# define __AANIMAL_HPP__

#include <iostream>
#include "Brain.hpp"

class AAnimal {

	protected:
		std::string	_type;

	public:
		AAnimal();
		AAnimal( std::string _type );
		AAnimal( AAnimal const & src );
		virtual ~AAnimal();

		virtual void makeSound(void) const = 0;
		std::string	getType( void ) const;
		AAnimal & operator=( AAnimal const & rhs );
};

#endif
