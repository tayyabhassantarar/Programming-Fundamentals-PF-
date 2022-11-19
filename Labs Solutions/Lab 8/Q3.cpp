#include<iostream>
using namespace std;
int main()
{
	int arr[5], *Sm;
	
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];

	}
	Sm = &arr[0];
	for (int i = 0; i < 5; i++)
	{
		if (*(arr + i) < *Sm)
		{
			*Sm = *(arr + i);
		}
	}
	cout << "small=" << *Sm << endl;
	system("pause");
	return 0;
}
