#include<iostream>
using namespace std;
int main()
{
	int arr[5],count=0;
	bool flag = false;
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
		if (arr[i]>0)
		{
			flag = true;
			count++;
		}
	}
	if (flag == true)
	{
		cout << "positive numbers are:" << count << endl;
	}
	system("pause");
	return 0;

















}