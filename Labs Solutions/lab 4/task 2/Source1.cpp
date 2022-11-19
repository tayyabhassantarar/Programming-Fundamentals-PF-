#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int a, b, c;
	ifstream fin;
	fin.open("file.txt");
	fin >> a >> b >> c;
	ofstream fout;
	fout.open("output.txt");
	if (a > b&&a > c)
	{
		fout << "largest=" << a;

	}
	else if (b >a && b> c)
	{
		fout << "largest=" << b;

	}
	else
	{
		fout << "largest=" << c;
	}
	fin.close();
	fout.close();
	system("pause");
	return 0;


}