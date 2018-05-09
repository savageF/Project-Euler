/*By listing the first six prime numbers : 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number ?
*/

#include <iostream>
#include <vector>
using namespace std;
int isPrime(int n_);

int main() {
	vector <int>prime_set;
	int checker = 0;
	int pusher = 2;
	while (checker < 10001) {
		if (isPrime(pusher) != 0) {
			prime_set.push_back(pusher);
			checker++;
		}
		pusher++;
	}
	
	for (const auto i : prime_set) cout << i << " ";
}

int isPrime(int n_) {
	int dev = 2;
	while (dev < n_) {
		if (n_ % dev == 0) {
			return 0;
		}
		dev++;
	}
	return n_;
}
