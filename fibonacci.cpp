/**********************************************************************************
// Recursive Func n! && Fibonacci sequence Fn
//
// Compiler: Visual Studio C/C++ 2019
//
// Description: Example of recursive and Fibonacci function usage.
/
**********************************************************************************/

#include <iostream>

using namespace std;

/* Recursive functions interface */

long long fn_1(int);

long long fn_2(int);

int main() {

	int user;

	cout << "Number input: " << endl;
	cin >> user;                                                /* Number input factoring */

	cout << "Result factoring: " << fn_1(user) << endl;
	cout << "Result Fibonacci: " << fn_2(user) - 1 << endl;

	system("pause");

	return EXIT_SUCCESS;
}

long long fn_1(int n1) {                                        /* Recursive func */

	if (n1 <= 1) {
		return 1;
	}
	else {
		__int64 vret = n1 * fn_1(n1 - 1);
		return vret;
	}
	return EXIT_SUCCESS;
}

long long fn_2(int n2) {                                        /* Fibonacci func */

	int t[2], i, fV;

	t[0] = 0;
	t[1] = 1;

	for (i = 0; i < n2; i++) {

		if (n2 <= 0) {

			return t[0], t[1];
		}
		else {
			fV = t[0] + t[1];
			t[0] = t[1];
			t[1] = fV;
		}
	}
}
