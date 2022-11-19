#include <iostream>
using namespace std;
void odd(int num);
int main ()
{
	int num;
	cout <<"Enter number please: ";
	cin >>num;
	odd( num);
}
void odd(int num)
{
	if (num%2!=0)
	{
		cout <<"Number is ODD";
	}
	else 
	{
		cout <<"number is even.";
	}
}
