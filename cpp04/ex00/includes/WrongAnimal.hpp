/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:00:19 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/02 13:54:54 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__WRONGANIMAL_HPP__
# define __WRONGANIMAL_HPP__

#include <iostream>

class WrongAnimal {

	protected:
		std::string	_type;

	public:
		WrongAnimal();
		WrongAnimal( std::string _type );
		WrongAnimal( WrongAnimal const & src );
		virtual ~WrongAnimal();

		void makeSound(void) const;
		std::string	getType( void ) const;
		WrongAnimal & operator=( WrongAnimal const & rhs );
};

#endif
