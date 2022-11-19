#include<iostream>
using namespace std;
int main()
{
	const int size = 10;
	int arr[size];
	cout << "enter 10 integer values";
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
		
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	system("pause");
	return 0;


}