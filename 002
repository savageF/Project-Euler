#include <iostream>
using namespace std;

int Fibonacci(int n_) {
	if (n_ == 0) {
		return 0;
	}
	else if (n_ == 1) {
		return 1;
	}
	else {
		return Fibonacci(n_ - 1) + Fibonacci(n_ - 2);
	}
}
int main() {
	int n_ = 0 , sum = 0;
	while (Fibonacci(n_) < 4000000) {
		if (Fibonacci(n_) % 2 == 0) {
			sum += Fibonacci(n_);
		}
		n_++;
	}
	cout << sum << endl;
}
