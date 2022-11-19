#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char a;
	int count = 0;
	ifstream fin;
	fin.open("file.txt");
	
	while (!fin.eof())
	{
		fin >> a;
		count++;
	}
	ofstream fout;
	fout.open("output.txt");
	fout << "number of alphabets=" << count << endl;	
	fin.close();
	fout.close();
	system("pause");
	return 0;


}