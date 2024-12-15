#include <iostream>
using namespace std;


int main()
{
    int num1, num2,num3;
    cout << "Enter 3 numbers: ";
    cin >> num1 >> num2>>num3;

    //+
    int sum = num1 + num2 + num3;

    cout <<num1<< " + "<<num2 << " + " <<num3 << " = " << sum << endl;

    //-
    int sub = num1 - num2 - num3;

    cout << num1 << " - " << num2 << " - " << num3 << " = " << sub << endl;

    // *
    int mul = num1 * num2 * num3;

    cout << num1 << " * " << num2 << " * " << num3 << " = " << mul << endl;

    // /
    float div= num1 /num2 / num3;

    cout << num1 << " / " << num2 << " / " << num3 << " = " << div << endl;

    int mod = num1 % num2 % num3;

    cout << num1 << " % " << num2 << " % " << num3 << " = " << mod << endl;

    return 0;
}
