/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:08:00 by erecuero          #+#    #+#             */
/*   Updated: 2022/03/11 17:18:35 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__SCALARCONVERSION_HPP__
# define __SCALARCONVERSION_HPP__

#include <iostream>


class ScalarConversion { 

	private:
		

	public:
		ScalarConversion( void );
		ScalarConversion( ScalarConversion const & src );
		~ScalarConversion();
		ScalarConversion & operator=( ScalarConversion const & rhs );
	
			
	
};

#endif