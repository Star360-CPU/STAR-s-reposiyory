#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;
int n;

int main()
{
	int* f;
	f = new int[1005];
	cout << "斐波那契数列长度：";
	cin >> n;
	f[1] = 1;
	f[2] = 1;
	for (int i = 3; i <= n; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
	}
	cout << "斐波那契数列为：";
	for (int i = 1; i <= n; i++)
	{
		cout << f[i] << " ";
	}
	cout << endl;
	delete[]f;
	double a, b;
	cout << "输入方程f(x)的a值b值：";
	cin >> a >> b;
	double x1, x2;
	do
	{
		cin >> x1 >> x2;
	} while ((a * x1 + b) * (a * x2 + b) > 0);
	double x = 1;
	double& l = x;
	do
	{
		l = (x1 + x2) / 2;
		if ((a * l + b) < 0)
		{
			x1 = l;
		}
		if ((a * l + b) > 0)
		{
			x2 = l;
		}
		if ((a * l + b) == 0)
		{
			break;
		}
	} while (fabs(a * l + b) < 1e-6);
	cout << "函数f(x)的根为：" << l << endl;
	return 0;
}
