#include <iostream>
using namespace std;
int printMax(int a[5], int b[5]);
int main ()
{
	int a[5];
	int b[5];
	
	printMax(a,b);
	
}
int printMax(int a[5], int b[5])
{
	int max=0;
	
	for (int i=0;i<10;i++)
	{
		if (max>max+i)
		{
			cout <<max;
		}
	}
}
