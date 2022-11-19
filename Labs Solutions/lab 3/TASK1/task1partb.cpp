#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	double b;
	ifstream fin;
	fin.open("TextFile1.txt");
	fin >> b;
	ofstream fout;
	fout.open("output.txt");
	fout << b;
	fin.close();
	fout.close();
	system("pause");
	return 0;
}
