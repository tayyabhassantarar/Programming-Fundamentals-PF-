#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int a;	
	ifstream fin;
	fin.open("TextFile1.txt");
	fin >> a;
	ofstream fout;
	fout.open("output.txt");
	fout << a << endl;
	fin.close();
	fout.close();
	system("pause");
	return 0;
}