#include<iostream>
using namespace std;
int main()
{
	const int size = 30;
	char arr[size];
	
	int length = 0;
	
	for (int i = 0; arr[i] != '\0'; i++)
	{
		cin.get(arr, size);
		length++;
	}
	for (int i = length - 1; i >= 0; i--)
	{
		cout << arr[i];
	}
	system("pause");
	return 0;





}