#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("file.txt");
	int a;
	cout << "enter a integer:";
	cin >> a;
	fout << a;
	fout.close();
	system("pause");
	return 0;


}