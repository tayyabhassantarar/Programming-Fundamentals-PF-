#include<iostream>
using namespace std;
int factorial(int a);
int main()
{
	int a;
	cout << "enter a number=";
	cin >> a;
	int fact;
	fact = factorial(a);
	cout << "factorial of a number=" << fact << endl;

	system("pause");
	return 0;
}
int factorial(int a)
{
	int fact=1;
	for (int i = 1; i <= a; i++)
	{
		fact = fact*i;
	}
	return fact;
}