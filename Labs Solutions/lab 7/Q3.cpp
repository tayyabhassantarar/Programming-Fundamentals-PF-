#include<iostream>
using namespace std;
void check_palindrome(int num);
int reverse(int a);
int main()
{
	int  num;
	cout << "Enter a positive number: ";
	cin >> num;
	check_palindrome(num);

	system("pause");
	return 0;
}
void check_palindrome(int num)
{
	int n, digit, rev = 0;
	n = num;
	do
	{
		digit = num % 10;
		rev = (rev * 10) + digit;
		num = num / 10;
	} while (num != 0);

	

	if (n == rev)
		cout << " The number is a palindrome." << endl;
	else
		cout << " The number is not a palindrome." << endl;

	int a;
	cout << "enter number you want to reverse:";
	cin >> a;
	
	rev = reverse( a);
	cout << rev << endl;

}
int reverse(int a)
{
	int rem = 0,rev=0;

	while (a != 0)
	{
		rem = a % 10;
		rev = (rev * 10) + rem;
		a = a / 10;
	}
	return rev;
}
