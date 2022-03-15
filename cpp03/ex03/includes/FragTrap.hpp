/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:38:35 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/15 15:28:09 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap( void );
		FragTrap( std::string name);
		FragTrap( FragTrap const & src );
		~FragTrap();

		FragTrap &	operator=( FragTrap const & rhs );

		void		highFivesGuys( void );

	private:
};

#endif
