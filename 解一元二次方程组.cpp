//���һԪ���η�����ax^2+bx+c=0�ĸ�
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a, b, c, s,q;
	cout << "��ֱ�����a,b,c��ֵ:";
	cin >> a >> b >> c;
	s = b * b - 4 * a * c;
/*�������޽����*/
	if (s < 0)
		cout << "�÷������޽�";
/*��������������ͬ������*/
	else if (s == 0)
	{
		cout << "�÷�����������ͬ��:" << endl;
		cout << "x1=x2=" << (-b) / (2 * a);
	}
/*��������������ͬ������*/
	else if (s > 0)
	{
		cout << "�÷�����������ͬ��:" << endl;
		cout << "x1=" << (-b + sqrt(s)) / (2*a)<<endl;
		cout << "x2=" << (-b - sqrt(s)) / (2 * a);
	}
	return 0;
}
