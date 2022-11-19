#include<iostream>
using namespace std;
int main()
{
	int arr[5],largest,second;
	int max = arr[0];
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];

	}
	if (arr[0]>arr[1])
	{
		second = arr[1];
		largest = arr[0];
	}
	else
	{
		largest = arr[1];
		second = arr[0];
	}
	for (int i = 2; i < 5; i++)
	{
		if (arr[i]>largest)
		{
			largest = arr[i];
			second = largest;
		}
		else if (arr[i] > second&&arr[i] != largest)
		{
			second = arr[i];
		}
	}
	cout << "second largest in array:" << second << endl;
	system("pause");
	return 0;
}