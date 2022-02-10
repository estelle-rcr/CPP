#include <iostream>
#include "Sample.class.hpp"

void f1(void) {
	Sample instance( 42 );

	std::cout << "Number of instances : " << Sample::getNbInst() << std::endl;

	return;
}

int	main() {

	//Sample instance1( 42 );
	//Sample instance2( 42 );
	
	//if (instance1.compare( &instance2 ) == 0 )
	//	std::cout << "instance1 and instance2 are structurally equal" << std::endl;
/*
	std::cout << "Number of instances : " << Sample::getNbInst() << std::endl;
	Sample instance1( 42 );
	f1();
	std::cout << "Number of instances : " << Sample::getNbInst() << std::endl;	*/
	return 0; 
}