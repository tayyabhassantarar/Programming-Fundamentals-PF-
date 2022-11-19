#include<iostream>
using namespace std;
void ascending(int arr[]);
int main()
{

	int size, arr[20];
	cout << "enter size";
	cin >> size;
	for (int i = 1; i < size; i++)
	{
		cout << "array element " << i  << endl;
		cin >> arr[i];
	}
	cout << "after sorting" << endl;
	
	ascending(arr);
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "  ";
	}
	system("pause");
	return 0;
}
void ascending(int arr[])
{
	int size,arr[20];
	
	for (int i = 1; i < size; i++)
	{
		for (int i = 1; i<size - 1; i++)
		{

			if (arr[i] < arr[i + 1])
			{
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
	
}
