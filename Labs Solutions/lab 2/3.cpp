#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int max = arr[0];
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];

	}
	cout << "maximum no.:";
	for (int i = 0; i < 5; i++)
	{
		
		if (arr[i]>max)
		{
			max = arr[i];
		}
		
	}
	cout << max << endl;
	system("pause");
	return 0;
}