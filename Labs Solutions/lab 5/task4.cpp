#include<iostream>
using namespace std;
void basiccalculator();
int main()
{
	basiccalculator();
	system("pause");
	return 0;
}
void basiccalculator()
{
	char op;
	cout << "enter operator + or - or *=";
	cin >> op;
	int no1, no2;
	cout << "enter 1st number=" ;
	cin >> no1;
	cout << "enter 2nd number=";
	cin >> no2;
	if (op == '+')
	{
		cout << "Result=" << no1 + no2 << endl;
	}
	else if (op == '-')
	{
		cout << "Result=" << no1 - no2 << endl;
	}
	else if (op == '*')
	{
		cout << "Result=" << no1 * no2 << endl;
	}

}