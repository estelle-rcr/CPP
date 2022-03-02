/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:03:04 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/02 13:57:53 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__CAT_HPP__
# define __CAT_HPP__

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

	private:
		Brain*		_brain;

	protected:
		std::string	_type;

	public:
		Cat();
		Cat( Cat const & src );
		~Cat();

		virtual void 		makeSound(void) const;
		std::string			&getIdea( int nb );
		void				setIdea( int nb, std::string idea );

		Cat & operator=( Cat const & rhs );
};

#endif
