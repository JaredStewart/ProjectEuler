#include <iostream>
#include <vector>

std::vector< int > primes;
void IncrementPrime( int& Prime );
bool isPrime( int number );

int main() {
	unsigned __int64 number = 600851475143;
	std::cout << "The factors in order are:" << std::endl;
	while ( number % 2 == 0 ) {
			number /= 2;
			std::cout << 2 << std::endl;
		}
	int prime = 3;
	primes.push_back( 3 );
	while ( number != 1 ) {
		while ( number % prime == 0 ) {
			number /= prime;
			std::cout << prime << std::endl;
		}
		IncrementPrime( prime );
	}
	std::cin >> number;
}

void IncrementPrime( int& Prime ) {
	do { Prime += 2;
	} while ( !isPrime (Prime) );
	return;
}

bool isPrime( int number ) {
	for ( auto prime : primes ) {
		if ( number % prime == 0 ) return false;
	}
	primes.push_back( number );
	return true;
}