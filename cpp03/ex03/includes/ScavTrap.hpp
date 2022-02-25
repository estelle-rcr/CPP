/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 09:29:23 by erecuero          #+#    #+#             */
/*   Updated: 2022/02/25 16:41:27 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:

		ScavTrap( void );
		ScavTrap( std::string name);
		ScavTrap( ScavTrap const & src );
		~ScavTrap();

		ScavTrap &	operator=( ScavTrap const & rhs );

		void		attack(std::string const & target);
		void		guardGate( void );

	private:
};

#endif
