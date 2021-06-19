// C++ program to illustrate the
// ldexp() function
#include <iostream>
#include <conio.h>
#include <cmath>

/*	Source by GeeksForGeeks
	Modified For Learn by Rizky Khapidsyah 
	I.D.E : VS2019 */

using namespace std;

int main() {
	double result;
	int x = 20, exp = 10000;

	// It returns x*(2^exp)
	result = ldexp(x, exp);

	// prints the result
	cout << "ldexp(x, exp) = " << result << endl;

	_getch();
	return 0;
}
