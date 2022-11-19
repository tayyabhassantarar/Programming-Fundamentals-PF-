#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin;
	fin.open("Data.txt");
	int size;
	cout<<"Enter Size:";
	cin>>size;
	int *p = new int [size];
	for(int i=0; i<size; i++)
	{
		fin>>p[i];
	}
	cout<<"\nData: ";
	for(int i=0; i<size; i++)
	{
		cout<<p[i]<<" ";
	}
	int max=p[0];
	for(int i=1; i<size; i++)
	{
		if(p[i]>max)
		{
			max=p[i];
		}
	}
	for(int i=0; i<size; i++)
	{
		p[i]=max-p[i];
	}
	cout<<"\nUpdated Data: ";
	for(int i=0; i<size; i++)
	{
		cout<<p[i]<<" ";
	}
	fin.close();
	delete []p;
	p=NULL;
	return 0;
}
	