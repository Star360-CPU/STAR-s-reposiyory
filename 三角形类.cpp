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
		cout<<"����ֱ��������"<<endl;
	else if (a == b && a == c)
		cout<<"���ǵȱ�������"<<endl;
	else if (a == b || a == c || b == c)
		cout<<"���ǵ���������"<<endl;
	else
		cout<<"������ͨ������"<<endl;
}

void main()
{
	float x1, x2, x3, area, p,C;
	cout<<"���������������ߵĳ��ȣ�"<<endl;
	cin >> x1 >> x2 >> x3;
	if (triangle(x1, x2, x3) == 1)
	{
		type(x1, x2, x3);
		p = (x1 + x2 + x3) / 2;
		area = sqrt(p * (p - x1) * (p - x2) * (p - x3));
		C = 2 * p;
		cout<<"���������Ϊ:"<< area<<endl;
		cout << "�������ܳ�Ϊ:" << C << endl;
	}
	else
		cout<<"���ܹ���������"<<endl;
	system("pause");
}
