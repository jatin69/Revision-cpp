/*
@author - Naveen Rohilla

Objective : To display fibonacci series upto N

Approach  :
iterative approach - displays the element inside the loop
*/

#include <iostream>
using namespace std;
#define N 10
int main() {
	int a = 0, b = 1, c, i = 3;
	cout << a << " ";
	cout << b << " ";

	do {
		c = a + b;
		cout << c << " ";
		a = b;
		b = c;
		i++;
	} while (i <= N);
	return 0;
}
