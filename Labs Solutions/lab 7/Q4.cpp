#include <iostream>
using namespace std;
void upper(char alpha);
void lower(char alpha);
int main ()
{
	char alpha;
	cout <<"Enter a character: ";
	cin >>alpha;
	
	upper(alpha);
	lower(alpha);
}
void upper(char alpha)
{
	char result;
	if (alpha>='A' && alpha <='Z')
	{
		result=alpha+32;
		cout <<result;
	}
}
void lower(char alpha)
{
	char result;
	if (alpha>='a' && alpha <='z')
	{
		result=alpha-32;
		cout <<result;
	}
}


