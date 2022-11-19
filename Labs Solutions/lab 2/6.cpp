#include<iostream>
using namespace std;
int main()
{
	int arr[5],sum1=0,sum2=0,totsum;
	cout << "enter numbers:";
	
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}
	cout << "positive numbers sum:";
	for (int i = 0; i < 5; i++)
	{

    	if (arr[i]>0)
		{			
			sum1 = sum1 + arr[i];
		}
	}
	cout << sum1<<endl;
	cout << "negative numbers sum";
	for (int i = 0; i < 5; i++)
	{	
		if (arr[i]<0)
		{		
			sum2 = sum2 + arr[i];
		}
	}
	cout << sum2<<endl;
	totsum = sum1 + sum2;
	cout << "total sum" << totsum << endl;
	system("pause");
	return 0;

}