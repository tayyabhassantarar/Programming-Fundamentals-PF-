#include<iostream>
using namespace std;
void leap_year();
int main()
{
	leap_year();
	system("pause");
	return 0;
}
void leap_year()
{
	int year;
	cout << "enter year=";
	cin >> year;
	if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0)
	{
		cout << "it is leap year" << endl;
	}
	if (year % 4 == 0 && year % 100 != 0)
	{
		cout << "it is leap year" << endl;
	}
	if (year % 4 != 0)
	{
		cout << "it is not leap year"<<endl;
	}
	if (year % 4 == 0 && year % 100 == 0 && year % 400 != 0)
	{
		cout << "it is not leap year" << endl;
	}
}