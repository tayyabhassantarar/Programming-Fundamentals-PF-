#include<iostream>
using namespace std;
void div();
int main()
{
	div();
	system("pause");
	return 0;
}
void div()
{
	int a, b,quotient,remainder;
	cout << "enter dividend:";
	cin >> a;
	cout << "enter divisor:";
	cin >> b;
	quotient = a / b;
	remainder = a%b;
	cout << "quotient=" << quotient<<endl;
	cout << "remainder=" << remainder << endl;

}