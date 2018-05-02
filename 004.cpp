/*A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.

*/

#include <iostream>
#include <string>
using namespace std;

const int MAX_NUM = 999 * 999;

bool ispalindrome(int n_) {

	string temp = to_string(n_);
	string before = temp;
	reverse(temp.begin(), temp.end());
	if (temp == before) {
		return true;
	}
	else {
		return false;
	}


}

int main() {
		
	for (int i = 900; i <= 999; i++) {
		for (int j = 900; j <= 999; j++) {
			if (ispalindrome(i*j)) cout << i * j << "  " << i << "  " << j << endl;
		}
	}

}
