#include<iostream>
using namespace std;
int main()
{
	const int size = 10;
	int arr[size];
	float avg = 0, sum = 0;;
	cout << "enter elements in array:";
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < size; i++)
	{
		sum = sum + arr[i];
		avg = sum / size;

	}
	cout << "sum " << avg << " ";
	system("pause");
	return 0;


}