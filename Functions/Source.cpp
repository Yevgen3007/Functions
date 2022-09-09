#include <iostream>
using namespace std;
int Add(int a = 0, int b = 0);
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);
void main()
{
	setlocale(LC_ALL, "");
	//cout << "Hello, functions!" << endl;
	int a, b;
	cout << "Enter num: "; cin >> a >> b;
	cout << a << '+' << b << '=' << Add(a, b) << endl;
	cout << a << '-' << b << '=' << Sub(a, b) << endl;
	cout << a << '*' << b << '=' << Mul(a, b) << endl;
	cout << a << '/' << b << '=' << Div(a, b) << endl;
}
int Add(int a, int b)
{
	int c = a + b;
	return c;
}
int Sub(int a, int b)
{
	return a - b;
}
int Mul(int a, int b)
{
	return a * b;
}
double Div(int a, int b)
{
	return (double)a / b;
}