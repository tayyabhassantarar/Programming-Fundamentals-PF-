#include<iostream>
#include<fstream>
using namespace std;
void words();
int main()
{    
	words();
	
	system("pause");
	return 0;
}
void words()
{
	ifstream fin;
	fin.open("file.txt");
	char arr[40];
	int count = 0;
	while (fin>>arr)
	{
		count++;
	}
	cout << "number of words are=" << count << endl;
	fin.close();
}
