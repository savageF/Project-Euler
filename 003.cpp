#include <iostream>
#include <time.h>
#include <vector>
using namespace std;
auto findnum = 600851475143;


int main() {

	clock_t t;
	t = clock();
	
	int i = 2;
	while (i < findnum/2) {
		if (findnum%i == 0) {
			cout << i << endl;
			findnum = findnum / i;
		}
		else {
			i++;
	
		}	
	}
	cout << findnum << endl;

	t = clock() - t;
	cout << ((float)t / CLOCKS_PER_SEC) << " sec" << endl;
}
