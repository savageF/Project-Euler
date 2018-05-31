// 1. a + b + c = 1000
// 2. a^2 + b^2 = c^2

#include <iostream>
using namespace std;

void Find_pytagorian() {
		int sum = 1000;
		int a = 0, b = 0, c = 0;
	for(a = 0 ; a < 1000 ; a++)
		for (b = 0; b < 1000; b++) {
			c = sum - (a + b);
			if ((a*a) + (b*b) == (c*c)) {
				cout << a << " " << b << " " << c << endl;
				cout << a * b*c << endl;
			}
		}
	

}

int main() {
	Find_pytagorian();
}
