#include<iostream>
using namespace std;
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int main()
{
	int a, b;
	cout << "enter two no.s:";
	cin >> a >> b;
	int sum;
	sum=add(a, b);
	cout << "addition of two numbers:" << sum << endl;

	int c;
	c = sub(a, b);
	cout << "subtraction of two numbers:" << c << endl;

	int prod;
	prod = mul(a, b);
	cout << "multiplication of two numbers:" << prod << endl;

	system("pause");
	return 0;
}
int add(int a, int b)
{
	int sum = a + b;
	return sum;
}
int sub(int a, int b)
{
	int c = a - b;
	return c;
}
int mul(int a, int b)
{
	int prod=a*b;
	return prod;
}