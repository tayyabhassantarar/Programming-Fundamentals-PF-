#include<iostream>
using namespace std;
int main()
{

	int arr[5];
	int sum, avg,x;
	sum = 0.0, avg;
	
	int *px, *psum, *pavg;

	px = &arr[0];  //  Or, px = &x;
	psum = &sum, pavg = &avg;
	cout << "enter array numbers upto 5:";
	for (int i = 0; i < 5; i++)
	{
		cin >> *px;
		*psum += *(px + i);

	}
	*pavg = *psum / 5;
	cout << "sum=" << *psum << endl;
	cout << "average" << *pavg << endl;
	system("pause");
	return 0;

}
