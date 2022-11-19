#include<iostream>
using namespace std;
void table(int a);
float Diameter(float r);
float Circumference(float r);
float Area(float r);
int main()
{

	int a;
	cout << "enter a number:";
	cin >> a;
	table(a);

	float r;
	cout << "enter radius:";
	cin >> r;
	float d;
	d=Diameter( r);
	cout << "diameter=" << d << endl;

	float cir;
	cir=Circumference(r);
	cout << "Circumference=" << cir << endl;

	float area;
	area=Area(r);
	cout << "Area=" << area << endl;

	system("pause");
	return 0;
}
void table(int a)
{
	for (int i = 1; i <= 10; i++)
	{
		cout << a << "*" << i << "=" << " " << a*i << endl;
	}
}
float Diameter(float r)
{
	float d;
	d = 2 * r;
	return d;
}
float Circumference(float r)
{
	float cir;
	cir = 2 * 3.14*r;
	return cir;
}
float Area(float r)
{
	float area;
	area = 3.14*r*r;
	return area;
}