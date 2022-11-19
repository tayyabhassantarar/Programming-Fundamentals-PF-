#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int c[20],sum=0,avg;
	ifstream fin;
	fin.open("TextFile1.txt");
	for (int i = 0; i <= 4; i++)
	{
		fin >> c[i];
		sum = sum + c[i];
	}
	ofstream fout;
	fout.open("output.txt");
	avg = sum / 5;
	fout << "sum=" << sum << endl;
	fout << "avg=" << avg << endl;
	fin.close();
	fout.close();
	system("pause");
	return 0;
}