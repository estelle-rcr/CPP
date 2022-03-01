/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:03:04 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/01 18:30:13 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__CAT_HPP__
# define __CAT_HPP__

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {

//	protected:
//		std::string	_type;

	public:
		Cat();
		Cat( Cat const & src );
		~Cat();

		virtual void makeSound(void) const;
	//	virtual std::string	getType( void ) const;
		Cat & operator=( Cat const & rhs );
};

#endif
