#include<iostream>
using namespace std;
void prevnext(int a, int& b, int& c);
int main()
{
	int a;
	cout << "enter a positive integer=";
	cin >> a;
	int b, c;
	prevnext(a, b, c);
	cout << "previous integer=" << b << endl;
	cout << "next integer=" << c << endl;

	system("pause");
	return 0;
}
void prevnext(int a, int& b, int& c)
{
		
	b = a - 1;
	c = a + 1;

}