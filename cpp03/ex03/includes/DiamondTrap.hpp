/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:00:26 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/15 15:28:07 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string 	_name;

	public:
		DiamondTrap( void );
		DiamondTrap( std::string name);
		DiamondTrap( DiamondTrap const & src );
		~DiamondTrap();

		DiamondTrap &	operator=( DiamondTrap const & rhs );

		void			attack( std::string const & target );
		void 			whoAmI( void );
};

#endif
