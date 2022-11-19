#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int arr[6];
	ofstream fout;
	fout.open("newfile.txt");	
	ifstream fin;
	fin.open("input.txt");
	for (int i = 1; i <= 5; i++)
	{
		arr[0] = 9;
		fout << arr[0];		
		fin >> arr[i];	
		fout << arr[i];
	}
	fin.close();
	fout.close();
	system("pause");
	return 0;
}