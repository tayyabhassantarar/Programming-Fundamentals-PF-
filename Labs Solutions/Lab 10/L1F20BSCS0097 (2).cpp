#include<iostream>
#include<fstream>
using namespace std;
int read(int*, int&, ifstream& fin);
int perform(int*, int*, int&, int&);
int perform1(int*, int*, int&, int&);


int main()
{
	ifstream fin;
	ofstream fout;
	fin.open("read.txt");
	int size = 1;
	int size1, size2;
	int* ptr = new int[size];
	int* one = new int[size];
	int* two = new int[size];
	read(ptr, size, fin);
	perform(ptr, one, size, size1);
	perform1(ptr, two, size, size2);
	for (int i = 0; i < size1; i++)
	{
		cout << one[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < size2; i++)
	{
		cout << two[i] << " ";
	}
	delete[]ptr;
	delete[]one;
	delete[]two;
}
int read(int* ptr, int& size, ifstream& fin)
{
	for (int i = 0; i < size; i++)
	{
		if (fin >> ptr[i])
		{
			size++;
		}
	}
	size--;
	return *ptr;
}
int perform(int* ptr, int*one, int& size, int& size1)
{
	size1 = 0;
	for (int i = 0; i < size; i++)
	{
		float count = 0.0;
		count = ptr[i] / 9.0;
		if (count >= 0 && count <= 1)
		{
			one[size1] = ptr[i];
			size1++;
		}
	}
	return *one;
}
int perform1(int*ptr, int*two, int&size, int&size2)
{
	size2 = 0;
	for (int i = 0; i < size; i++)
	{
		float count;
		count = ptr[i] / 9.0;
		if (count > 1)
		{
			two[size2] = ptr[i];
			size2++;
		}
	}
	return *two;
}