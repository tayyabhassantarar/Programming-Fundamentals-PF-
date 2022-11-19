#include<iostream>
using namespace std;
void days(int a);
int main()
{
	int a;
	cout << "enter a number between 1 to 7=";
	cin >> a;
	days(a);

	system("pause");
	return 0;
}
void days(int a)
{
	
	if (a == 1)
	{
		cout << "Monday";
	}
	else if (a == 2)
	{
		cout << "Tuesday";
	}
	else if (a == 3)
	{
		cout << "Wednesday";
	}
	else if (a == 4)
	{
		cout << "Thursday";
	}
	else if (a == 5)
	{
		cout << "Friday";
	}
	else if (a == 6)
	{
		cout << "Saturday";
	}
	else if (a==7)
	{
		cout << "Sunday";
	}
}