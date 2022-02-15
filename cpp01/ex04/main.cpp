/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:17:13 by erecuero          #+#    #+#             */
/*   Updated: 2022/02/15 17:25:10 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main( int ac, char *av ) {

	std::ifstream	input;
	std::ofstream	output;
	std::string		file;

	if (ac != 4) {
		std::cout << "Wrong number of args\n";
		return 1;
	}
	file = argv[1];
	input.open(file, std::ios::in);
	if (input.fail())
	{
		std::cout << "Error: cannot open file " << filename << std::endl;
		return (EXIT_FAILURE);
	}
	output.open(out_file_name(file), std::ios::in | std::ios::trunc);
	if (output.fail())
	{
		std::cout << "Error: cannot create file " << out_file_name(filename) << std::endl;
		return (EXIT_FAILURE);
	}
	loser_sed(argv[2], argv[3], input, output);


}


   newfile.open("tpoint.txt",ios::out);  // open a file to perform write operation using file object
   if(newfile.is_open()) //checking whether the file is open
   {
      newfile<<"Tutorials point \n";   //inserting text
      newfile.close();    //close the file object
   }
   newfile.open("tpoint.txt",ios::in); //open a file to perform read operation using file object
   if (newfile.is_open()){   //checking whether the file is open
      string tp;
      while(getline(newfile, tp)){ //read data from file object and put it into string.
         cout << tp << "\n"; //print the data of the string
      }
      newfile.close(); //close the file object.
   }
