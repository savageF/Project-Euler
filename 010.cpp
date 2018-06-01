/*The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.*/

#include <iostream>
#include <vector>
#include <time.h>
#include<numeric>
#include <algorithm>
const long MAX_SIZE = 2000000;

void answer() {
	int i = 2, j;
	std::vector <long>sieve(MAX_SIZE+1);
	std::iota(sieve.begin(), sieve.end(), 0);
	sieve[1] = 0;

	while (i <= MAX_SIZE / 2) {
		j = 2;
			while (i*j <= MAX_SIZE && sieve[i] != 0) {
				sieve[i*j] = 0;
				j += 1;
			}
			i += 1;
	}

	std::cout << "1st end" << std::endl;


	long k = 0;
	long long sum = 0;
	while (k <= MAX_SIZE) {
		if (sieve[k]) {
			sum += sieve[k];
		}
		k += 1;
		
	}
	
	std::cout << sum << std::endl;
}

int main() {
	clock_t begin, end;
	begin = clock();
	answer();
	end = clock();
	std::cout << "수행시간 >> " << ((end - begin)/CLOCKS_PER_SEC)<<" Sec" << std::endl;
}
