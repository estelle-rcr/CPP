

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample( int v ) : _foo( v ) {

	std::cout << "Constructor called" << std::endl;
	Sample::_nbInst += 1;
	return;
}

Sample::~Sample( void ) {
	
	std::cout << "Destructor called" << std::endl;
	Sample::_nbInst -= 1;
	return;
}

int		Sample::getFoo( void ) const {

	return this->_foo;
}

int		Sample::compare( Sample * other ) const {

	if ( this->_foo < other->getFoo() )
		return -1;
	else if ( this->_foo> other->getFoo() )
		return 1;
	
	return 0;
}

int		Sample::getNbInst( void ) {

	return Sample::_nbInst;
}

int 	Sample::_nbInst = 0;