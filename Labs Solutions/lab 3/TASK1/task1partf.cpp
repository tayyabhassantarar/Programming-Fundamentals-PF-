#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char c[20];
	ifstream fin;
	fin.open("TextFile1.txt");
	fin.getline(c,20);
	ofstream fout;
	fout.open("output.txt");
	fout << c;
	fin.close();
	fout.close();
	system("pause");
	return 0;
}