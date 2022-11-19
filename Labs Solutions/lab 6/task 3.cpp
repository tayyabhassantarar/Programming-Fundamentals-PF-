#include<iostream>
using namespace std;
void findGreater(int a, int b, int c);
int main()
{
	int a, b, c;
	cout << "enter three numbers=";
	cin >> a >> b >> c;
	findGreater(a, b, c);

	system("pause");
	return 0;
}
void findGreater(int a, int b, int c)
{
	
	if (a > b&&a > c)
	{
		cout << "greater=" << a << endl;
	}
	else if (b > a&&b > c)
	{
		cout << "greater=" << b<<endl;
	}
	else if (c > b&&c > a)
	{
		cout << "greater=" << c<<endl;
	}

}