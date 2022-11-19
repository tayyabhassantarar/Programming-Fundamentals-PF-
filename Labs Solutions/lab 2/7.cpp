#include<iostream>
using namespace std;
int main()
{
	int length = 0;
	char arr[50];

	for (int i = 0; arr[i]!='\0'; i++)
	{
		cin.get(arr,50);
		length++;
	}
	cout << "the string containsv" << length << " elements in string";
	system("pause");
	return 0;


}
