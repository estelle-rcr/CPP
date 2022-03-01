/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:30:03 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/01 16:08:48 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__BRAIN_HPP__
# define __BRAIN_HPP__

#include <iostream>

class Brain {

	protected:
		std::string	_ideas[100];

	public:
		Brain();
		Brain( Brain const & src );
		virtual ~Brain();
		
		Brain & operator=( Brain const & rhs );
		std::string			&getIdea( int nb );
		void				setIdea( int nb, std::string idea );
};

#endif
