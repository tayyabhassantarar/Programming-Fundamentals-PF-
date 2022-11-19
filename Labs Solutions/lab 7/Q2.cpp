#include <iostream>
using namespace std;
void pass(int marks);
void fail(int marks);

int main ()
{
	int marks;
	cout <<"Enter the marks: ";
	cin >>marks;
	pass(marks);
	fail(marks);

}
void pass(int marks)
{
	if (marks>=50 && marks <70)
	{
		cout <<"D grade.";
	}
	else if (marks >=70 && marks <80)
	{
		cout <<"C grade.";
	}
	else if (marks >=80 && marks <90)
	{
		cout <<"B grade";
	}
	else if (marks>=90)
	{
		cout <<"A grade.";
	}
}
void fail(int marks)
{
	if (marks<50)
	{
		cout <<"F grade.";
	}
}
