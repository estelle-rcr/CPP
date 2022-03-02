/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:03:04 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/02 13:48:09 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__CAT_HPP__
# define __CAT_HPP__

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {

	private:

	public:
		Cat();
		Cat( Cat const & src );
		~Cat();

		Cat & operator=( Cat const & rhs );

		virtual void makeSound(void) const;

};

#endif
