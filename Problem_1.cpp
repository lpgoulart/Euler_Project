// Made by Leonardo Goulart
// IT student Bachelor at UFRN
// implemented in C++ programming language
// Problem one
// sum of all numbers multiples of 3's and 5's below 1000

#include <iostream>

int main() {

	int sum = 0;

	for ( int i = 1; i < 1000; i++ ) {
		if ( i%3 == 0 || i%5 == 0) sum += i;
	}
	std::cout << sum << std::endl;

	return 0;
}