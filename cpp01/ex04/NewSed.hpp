/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NewSed.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:29:15 by erecuero          #+#    #+#             */
/*   Updated: 2022/02/15 17:41:00 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __NEWSED_HPP__
# define __NEWSED_HPP__

# include <string>
# include <iostream>
# include <fstream>
# include <iomanip>

std::string	out_file_name(std::string filename);

void	loser_sed(std::string s1, std::string s2, std::ifstream &input, std::ofstream &output);

#endif
