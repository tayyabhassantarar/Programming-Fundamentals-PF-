#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char arr[10];
	char arr2[10];
	ifstream fin;
	fin.open("input1.txt");
	fin.getline(arr, 10);
	fin.close();
	ofstream fout;
	fout.open("output.txt");
	fout << arr <<" ";
	fin.open("input2.txt");
	fin.getline(arr2, 10);
	fout << arr2;		
	fin.close();
	fout.close();
	system("pause");
	return 0;
}