/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:00:26 by erecuero          #+#    #+#             */
/*   Updated: 2022/02/25 17:09:57 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"

class DiamondTrap : virtual public ClapTrap
{
	public:

		DiamondTrap( void );
		DiamondTrap( std::string name);
		DiamondTrap( DiamondTrap const & src );
		~DiamondTrap();

		DiamondTrap &	operator=( DiamondTrap const & rhs );

	private:
		std::string 	_name;
};

#endif