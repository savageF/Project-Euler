#include <iostream>
using namespace std;

int howManyDivisors(long long n) {
	int ret = 1;

	long long factor = 2;
	while (factor <= n) {
		int temp = 1;
		while (n % factor == 0) {
			n /= factor;
			temp++;
		}
		ret *= temp;
		factor++;
	}

	return ret;
}
// exmaple 10
// factor n  temp ret
// 2      10 2    2
// 3      5  1    2
// 4      5  1    2
// 5      2  2    4


int main() {
	
	long num1 = 1;
	long Common_dif = 1;
	while (true) {
		++Common_dif;
		num1 += Common_dif;
		if (howManyDivisors(num1) >= 500) {
			cout << num1 << endl;
			break;
		}
	}
}
