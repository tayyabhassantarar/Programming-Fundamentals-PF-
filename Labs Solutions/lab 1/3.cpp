#include<iostream>
using namespace std;
int main()
{
	const int size = 10;
	int arr[size] = { 5, 9, 2, 1, 0, 4, 5, 6, 7, 8 };
	cout << "index values are";
	for (int i = 0; i < size; i++)
	{
		if (i % 2 == 0)
		{
			cout << arr[i] << " ";
		}
	}
	cout << endl;
	cout << "odd values are";
	for (int i = 0; i < size; i++)
	{
		if (i%2!=0)
		{
			cout << arr[i] << " ";
		}
	}
	system("pause");
	return 0;
}