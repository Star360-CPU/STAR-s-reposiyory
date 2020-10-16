//求解一元二次方程组ax^2+bx+c=0的根
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a, b, c, s,q;
	cout << "请分别输入a,b,c的值:";
	cin >> a >> b >> c;
	s = b * b - 4 * a * c;
/*方程组无解情况*/
	if (s < 0)
		cout << "该方程组无解";
/*方程组有两个相同解的情况*/
	else if (s == 0)
	{
		cout << "该方程有两个相同解:" << endl;
		cout << "x1=x2=" << (-b) / (2 * a);
	}
/*方程组有两个不同解的情况*/
	else if (s > 0)
	{
		cout << "该方程有两个不同解:" << endl;
		cout << "x1=" << (-b + sqrt(s)) / (2*a)<<endl;
		cout << "x2=" << (-b - sqrt(s)) / (2 * a);
	}
	return 0;
}
