#include<iostream>
using namespace std;
int main()
{
	const int size = 5;
	int arr[size];
	int max = arr[0];
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	for (int i = 1; i < size; i++)
	{
		if (arr[i]>max)
			max = arr[i];
	}
	cout << "maximum" << " " << max ;
	system("pause");
	return 0;









}