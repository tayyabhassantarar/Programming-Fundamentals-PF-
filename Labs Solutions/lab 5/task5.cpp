#include<iostream>
using namespace std;
int naturalsum();
int main()
{
	int sum;
	sum=naturalsum();
	cout << "sum of first natural numbers=" << sum<<endl;
	system("pause");
	return 0;
}
int naturalsum()
{
	int no,sum=0,a;
	cout << "enter no:";
	cin >> no;
	for (int i = 0; i < no; i++)
	{
		a = 1 + i;
		sum =sum + a;
	}
	return sum;
}