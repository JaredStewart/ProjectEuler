#include <iostream>

bool isMultipleOfN( int N, int value ) {
	return value % N == 0;
}

int main() {
	int sum = 0;
	for ( int i = 0; i < 1000; ++i ){
		if ( isMultipleOfN( 3, i ) || isMultipleOfN( 5, i ) ) { sum += i; }
	}
	std::cout << "The sum is " << sum;
	std::cin >> sum;
	return 0;
}