#include<iostream>
using namespace std;
int main()
{

	int arr[5];
	int sum, x;
	float avg;
	sum = 0;
	
	int *px, *psum;
	float *pavg;

	px = &arr[0];  //  Or, px = &x;
	psum = &sum, pavg = &avg;
	cout << "enter array numbers upto 5:";
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
		*psum += *(px + i);

	}
	*pavg = *psum / 5;
	cout << "sum=" << *psum << endl;
	cout << "average" << *pavg << endl;
	system("pause");
	return 0;

}
