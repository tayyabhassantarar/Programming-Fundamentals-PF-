#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int arr[5], max = 0, min = 0;
	ifstream fin;
	ofstream fout;
	fin.open("TextFile1.txt");
	for (int i = 0; i < 5; i++)
	{
		fin >> arr[i];
		max = arr[i];
		if (arr[i]>max)
		{
			max = arr[i];
			fout.open("output.txt");
			fout << "maximum" << max << endl;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		min = arr[i];
		if (arr[i] < min)
		{
			min = arr[i];
			fout.open("output.txt");
			fout << "minimum" << min << endl;
		}
	}
	fin.close();
	fout.close();
	system("pause");
	return 0;
}
