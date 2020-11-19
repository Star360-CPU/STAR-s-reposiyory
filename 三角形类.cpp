#include <stdio.h>
#include <math.h>
#include<iostream>
using namespace std;
int triangle(float x, float y, float z)
{
	if (x + y > z && x + z > y && y + z > x)
		return 1;
	else
		return 0;
}

void type(float a, float b, float c)
{
	if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
		cout<<"这是直角三角形"<<endl;
	else if (a == b && a == c)
		cout<<"这是等边三角形"<<endl;
	else if (a == b || a == c || b == c)
		cout<<"这是等腰三角形"<<endl;
	else
		cout<<"这是普通三角形"<<endl;
}

void main()
{
	float x1, x2, x3, area, p,C;
	cout<<"输入三角形三条边的长度："<<endl;
	cin >> x1 >> x2 >> x3;
	if (triangle(x1, x2, x3) == 1)
	{
		type(x1, x2, x3);
		p = (x1 + x2 + x3) / 2;
		area = sqrt(p * (p - x1) * (p - x2) * (p - x3));
		C = 2 * p;
		cout<<"三角形面积为:"<< area<<endl;
		cout << "三角形周长为:" << C << endl;
	}
	else
		cout<<"不能构成三角形"<<endl;
	system("pause");
}
