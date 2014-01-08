#include <iostream>

int main() {
	int current = 1, last = 1, sum = 0;
	do {
		if ( current % 2 == 0 ) sum += current;
		current += last;
		last = current - last;
	} while ( current < 4e6 );
	std::cout << "The sum is " << sum;
	std::cin >> sum;
	return 1;
}