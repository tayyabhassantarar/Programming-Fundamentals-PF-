#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int size = 15,size1=1,size2=1;
	int *even = new int[size1];
	int *odd = new int[size2];
	int *arr=new int[size];
	ifstream fin;
	fin.open("data.txt");
	
	for (int i = 0; i < size; i++)
	{

		fin >> arr[i];
		
	}
	cout << "odd numbers:";
	for (int i = 0; i < size; i++)
	{
		
		if (arr[i] % 2 != 0)
		{
			odd[i] = arr[i];
			size2++;
			cout << odd[i] << " ";
		}
		
	}
	cout << "even numbers:";
	for (int i = 0; i < size; i++)
	{

		if (arr[i] % 2 == 0)
		{
			even[i] = arr[i];
			size1++;
			cout << even[i] << " ";
		}

	}
	
	delete[]arr;
	delete[]even;
	delete[]odd;
	arr = NULL;
	even = NULL;
	odd = NULL;

	system("pause");
	return 0;

}