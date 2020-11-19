#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <set>
#define ios ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define debug(a) cout << #a << " " << a << endl
using namespace std;
typedef long long ll;
const double pi = acos(-1);
const double eps = 1e-8;
const int inf = 0x3f3f3f3f;
const int maxn = 100007;//1e5+7 
const ll mod = 1000000007;//1e9+7
class Point
{
private:
	int x;
	int y;
public:
	Point(int _x = 0, int _y = 0);
	void setPoint(int _x, int _y);
	void printCoordinate();
	friend double distance(Point a, Point b);
	friend class Line;
};


void Point_test();
class Line
{
private:
	Point a;
	Point b;
public:
	Line(Point _a, Point _b) {
		a = _a;
		b = _b;
	}
	double length() {
		return hypot(a.x - b.x, a.y - b.y);
	}
};
Point::Point(int _x, int _y)
{
	x = _x;
	y = _y;
}

void Point::setPoint(int _x, int _y)
{
	x = _x;
	y = _y;
}

void Point::printCoordinate()
{
	cout << " 横坐标： " << x << " 纵坐标： " << y << endl;
}

double distance(Point a, Point b)
{
	return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

void Point_test()
{
	string op;
	int tp;
	cout << "请输入要进行的操作：" << endl;
	cout << "输入'create x y '以初始化一个点 " << endl;
	int x, y;
	while (cin >> op) {
		if (op == "create") {
			cin >> x >> y;
			break;
		}
		else {
			cout << "指令错误！" << endl;
		}
	}
	Point poi(x, y);
	cout << "请输入要进行的操作：" << endl;
	cout << "输入'set x y ' 以修改点的坐标为 (x,y) " << endl;
	cout << "输入'print' 以输出当前点的坐标 " << endl;
	cout << "输入'distance' 以计算于另一个点的距离 " << endl;
	cout << "输入'line' 以与另外一点生成一条线段，并计算长度 " << endl;
	cout << "输入'end' 以结束 " << endl;
	while (cin >> op) {
		if (op == "end") {
			break;
		}
		else if (op == "set") {
			cin >> x >> y;
			poi.setPoint(x, y);
		}
		else if (op == "print") {
			poi.printCoordinate();
		}
		else if (op == "distance") {
			cout << "请输入另外一点坐标 x y ：" << endl;
			cin >> x >> y;
			Point p2(x, y);
			cout << "两点之间距离为： " << distance(poi, p2) << endl;
		}
		else if (op == "line") {
			cout << "请输入另外一点坐标 x y ：" << endl;
			cin >> x >> y;
			Point p2(x, y);
			Line lin(poi, p2);
			cout << "线段长度为： " << lin.length() << endl;
		}
		else {
			cout << "指令错误！" << endl;
		}
		cout << "请输入要进行的操作：" << endl;
	}
}
int main()
{
	string op;
	cout << "请输入要进行的操作：" << endl;
	cout << "输入'point' 以测试point类 " << endl;
	cout << "输入'end' 以结束 " << endl;
	while (cin >> op) {
		if (op == "end") {
			break;
		}
		else if (op == "point") {
			Point_test();
		}
		else {
			cout << "指令错误！" << endl;
		}
		cout << "请输入要进行的操作：" << endl;
		cout << "输入'point' 以测试point类 " << endl;
		cout << "输入'end' 以结束 " << endl;
	}
	system("pause");

	return 0;
}