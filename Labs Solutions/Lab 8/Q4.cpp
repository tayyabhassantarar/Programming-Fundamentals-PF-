#include<iostream>
using namespace std;
void findFactorial(int, int*);
int main()
{
	int i, fact, num;
	cout << "enter a number";
	cin >> num;
	findFactorial(num, &fact);
	cout << fact;
	system("pause");
	return 0;
}
void findFactorial(int num, int *fact)
{
	int i;
	*fact = 1;
	for (i = 1; i <= num; i++)
	{
		*fact = *fact*i;
	}
}
