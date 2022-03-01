/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:03:04 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/01 14:58:13 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__WRONGCAT_HPP__
# define __WRONGCAT_HPP__

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

	protected:
		std::string	_type;

	public:
		WrongCat();
		WrongCat( WrongCat const & src );
		~WrongCat();

		void makeSound(void) const;
		std::string	getType( void ) const;
		WrongCat & operator=( WrongCat const & rhs );
};

#endif
