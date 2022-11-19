#include<iostream>
using namespace std;
int main()
{
	int rows;
	int columns;
	int arr[10][10];
	cout << "enter rows:";
	cin >> rows;
	cout << "enter columns:";
	cin >> columns;

	cout << "enter 6 array elemnets:";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; i++)
		{
			cin >> arr[i][j];

		}
	}
	cout << "Output: ";
	for (int i = 0; i<row; i++) {
		for (int j = 0; j<col; j++) {

			cout << arr[i][j] << " " << ;
		}
		system("pause");
		return 0;

	}