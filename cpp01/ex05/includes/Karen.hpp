/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:48:16 by erecuero          #+#    #+#             */
/*   Updated: 2022/02/16 15:14:57 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __KAREN_HPP__
# define __KAREN_HPP__

#include <iostream>

class Karen {

	public:
		Karen();
		~Karen();

		void	complain(std::string level);

	private:
		void	debug();
		void	info();
		void	warning();
		void	error();
		std::string		_levels[4];

};

#endif
