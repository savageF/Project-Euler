/*2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20 ?
*/

#include <iostream>
using namespace std;

int main() {
	int find_num = 1000;
	int counter = 0;
	while (true) {
		if (
			find_num % 1 == 0 &&
			find_num % 2 == 0 &&
			find_num % 3 == 0 &&
			find_num % 4 == 0 &&
			find_num % 5 == 0 &&
			find_num % 6 == 0 &&
			find_num % 7 == 0 &&
			find_num % 8 == 0 &&
			find_num % 9 == 0 &&
			find_num % 10 == 0 &&
			find_num % 11 == 0 &&
			find_num % 12 == 0 &&
			find_num % 13 == 0 &&
			find_num % 14 == 0 &&
			find_num % 15 == 0 &&
			find_num % 16 == 0 &&
			find_num % 17 == 0 &&
			find_num % 18 == 0 &&
			find_num % 19 == 0 &&
			find_num % 20 == 0
			) {
			cout << find_num << endl;
			return 0;
		}
		else {
			find_num += 20;
		}
	}
}
