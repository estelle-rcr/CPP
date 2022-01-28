#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

class Contact {

public:
	Contact();
	~Contact();

	std::string	attributes[5];

	bool		setAttribute( std::string attribute, std::string _local );
	bool		createContact( int indexInput );
	std::string	getAttribute( std::string attribute ) const;
	int			getIndex( void ) const;
	void		removeAttributes( void );
	static int	getNbInst( void );

private:
	static int	_nbInst;
	int			_index;
	std::string _firstName, _lastName, _nickName, _phoneNb, _darkestSecret;

};

#endif
