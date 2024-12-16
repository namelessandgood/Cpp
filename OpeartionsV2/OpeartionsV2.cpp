#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int num1, num2;

	cout << "Enter two numbers: ";

	cin >> num1;//>> num2;

	// cout << num1 << "^" << num2 << ":" << pow(num1, num2) << endl;
	// cout << num1 << " sqrt " << sqrt(num1) << endl;
	// cout << num2 << " abs " << abs(num2) << endl;

	// trigonometric functions
	cout << " sin( " << num1 << " ) = " << sin(num1) << endl;
	cout << " cos( " << num1 << " ) = " << cos(num1) << endl;
	cout << " tan( " << num1 << " ) = " << tan(num1) << endl;

	cout << " asin( " << num1 << " ) = " << asin(num1) << endl;
	cout << " acos( " << num1 << " ) = " << acos(num1) << endl;
	cout << " atan( " << num1 << " ) = " << atan(num1) << endl;

	// hyperbolic functions
	cout << " sinh( " << num1 << " ) = " << sinh(num1) << endl;
	cout << " cosh( " << num1 << " ) = " << cosh(num1) << endl;
	cout << " tanh( " << num1 << " ) = " << tanh(num1) << endl;

	cout << " asinh( " << num1 << " ) = " << asinh(num1) << endl;
	cout << " acosh( " << num1 << " ) = " << acosh(num1) << endl;
	cout << " atanh( " << num1 << " ) = " << atanh(num1) << endl;

	// exp
	cout << " exp( " << num1 << " ) = " << exp(num1) << endl;

	//log
	cout << " log( " << num1 << " ) = " << log(num1) << endl;
	cout << " log10( " << num1 << " ) = " << log10(num1) << endl;
	cout << " log2( " << num1 << " ) = " << log2(num1) << endl;


	return 0;
}
