#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	bool c;
	ifstream fin;
	fin.open("TextFile1.txt");
	fin >> c;
	ofstream fout;
	fout.open("output.txt");
	fout << c;
	fin.close();
	fout.close();
	system("pause");
	return 0;
}
