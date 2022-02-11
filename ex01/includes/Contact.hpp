#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

class Contact {

public:

	std::string	attributes[5];

	Contact();
	~Contact();

	bool		setAttribute( int i );
	bool		createContact( int indexInput );
	std::string	getAttribute( int i ) const;
	int			getIndex( void ) const;
	static int	getNbInst( void );

private:

	static int	_nbInst;
	int			_index;
	std::string _firstName, _lastName, _nickName, _phoneNb, _darkestSecret;

};

#endif
