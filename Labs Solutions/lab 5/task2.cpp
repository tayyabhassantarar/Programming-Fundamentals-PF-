#include<iostream>
using namespace std;
void printtable();

int main()
{

	printtable();
	system("pause");
	return 0;
}
void printtable()
{

	int a;
	cout << "enter a number";
	cin >> a;
	for (int i = 1; i <= 10; i++)
	{
		cout << a << " * " << i << "=" << a*i << endl;
	}


}