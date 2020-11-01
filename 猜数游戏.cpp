#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	int a, b, c;
	srand(time(0));
	a = 1 + rand() % 100;

	cout << "欢迎来到猜数字游戏" << endl;
	cout << "请输入一个数 ";

	for (c = 1; c <= 10; c++)
	{
		cout << ">>>";
		cin >> b;
		if (a == b) break;
		if (a < b) { cout << "过大, "; c = c + 1; }
		if (a > b) { cout << "过小, "; c = c + 1; }
	}
	if (c <= 10)
		cout << "猜对了!" << endl;
	else
		cout << "失败!" << endl;
	return 0;
}