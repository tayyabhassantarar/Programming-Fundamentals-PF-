#include<iostream>
using namespace std;
void check_char();
int main()
{
	check_char();
	system("pause");
	return 0;

}
void check_char()
{

	char a;
	cout << "enter charcter=";
	cin >> a;
	if (a >= 'A'&&a <= 'Z' || a >= 'a'&&a <= 'z')
	{
		cout << "the enetered character is an alphabet" << endl;
	}
	else
	{
		cout << "the enetered character is not  an alphabet" << endl;
	}
}