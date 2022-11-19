#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	cout << "Press 1 for new record" << endl;
	cout << "Press 2 for update record" << endl;
	cout << "Press 3 for exit"<<endl;
	int user;
	cin >> user;
	if (user == 1)
	{
		int ID;
		char arr[10];
		double GPA;
		cout << "Enter ID:";
		cin >> ID;
		cout << "Enter Name:";
		cin >> arr;
		cout << "Enter GPA:";
		cin >> GPA;
		ofstream fout;
		fout.open("file.txt");
		fout << ID << " " << arr << " " << GPA;
		fout.close();
		fout.open("temp.txt");
		fout << ID << " " << arr << " " << GPA;
		fout.close();
		
	}
	if (user == 2)
	{
		int ID;
		char arr[10];
		double GPA;
		cout << "Enter ID:";
		cin >> ID;
		cout << "Enter Name:";
		cin >> arr;
		cout << "Enter GPA:";
		cin >> GPA;
		ofstream fout;
		fout.open("file.txt");
		fout << ID << " " << arr << " " << GPA;
		fout.close();
	}
	if (user == 3)
	{
		cout << "exit";
	}
	system("pause");
	return 0;

}