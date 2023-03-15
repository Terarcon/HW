#include<iostream>
using namespace std;

void main()
{
	int a, b;
	cout << "Enter variable values 0 or 1: \n"; 
	cout << "a = "; cin >> a; 
	cout << "b = "; cin >> b;

	if (a == a && b == b)
	{
		a = b;
		b = a;
		cout << "a = " << a << ", b = " << b << endl;
	}
}