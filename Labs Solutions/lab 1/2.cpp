#include<iostream>
using namespace std;
int main()
{
	const int size = 15;
	int arr[size];
	int arr2[size];
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < size; i++)
	{
		arr2[i] = arr[i] - 5;
	}
	cout << "subtract values";
	for (int i = 0; i < size; i++)
	{
		cout << arr2[i] << " ";
	}
	cout << endl;
	cout << "original values";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	system("pause");
	return 0;





}