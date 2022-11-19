#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int arr[3];
	ifstream fin;
	ofstream fout;
	fin.open("average.txt");
	fout.open("newfile.txt");
	for (int i = 0; i < 3; i++)
	{
		fin >> arr[i];
		if (arr[i] < 4)
		{
			fout << "below average";
		}
		if (arr[i] >= 4 && arr[i] <= 6)
		{
			fout << "on average";
		}
		if (arr[i]>6)
		{
			fout << "above average";
		}
	}
	fin.close();
	fout.close();
	system("pause");
	return 0;
			












}