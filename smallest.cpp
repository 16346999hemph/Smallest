//Name: Anyshya Hemphill
//Program 1 – Numbers
// This program finds the smallest value of 4 integers entered by the user.
#include <iostream>
using namespace std;
int main() {
	int a, b, c, d, minimum;
	char again = 'Y';

	while (again == 'Y') {
		cout << "Enter 4 integers: ";
		cin >> a >> b >> c >> d;
		minimum = a;
		if (b < minimum) {
			minimum = b;
		}
		if (c < minimum) {
			minimum = c;
		}
		if (d < minimum) {
			minimum = d;
		}
		cout << "The smallest number is: " <<
			minimum;
		cout << " Again? ";
		cin >> again;
	}

	return 0;
}
