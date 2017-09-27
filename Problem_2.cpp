// Made by Leonardo Goulart
// IT student Bachelor at UFRN
// implemented in C++ programming language
// Problem two
// sum of all even numbers in fibonacci

#include <iostream>

int main () {

	int value1 = 1;
	int value2 = 1;
	int value = 0; 
	int sum = 0;
	while ( value <= 4000000 ) {
		if ( value % 2 == 0 ) 
			sum += value;

		std::cout << value << std::endl;
		value1 = value2;
		value2 = value;
		value  = value1 + value2;
	}

	std::cout << sum << std::endl;

	return 0;
}