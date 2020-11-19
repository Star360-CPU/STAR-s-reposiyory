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

class int_stack {
private:
	int data[maxn];
	int topz;
public:
	int_stack();
	int size();
	bool empty();
	int top();
	void pop();
	void push(int);
	void create(int);
};

void Stack_test();


int_stack::int_stack() {
	topz = 0;
	memset(data, 0, sizeof(data));
}

bool int_stack::empty() {
	if (topz) {
		return false;
	}
	else {
		return true;
	}
}

int int_stack::size() {
	return topz;
}

int int_stack::top() {
	if (size() != 0) {
		return data[topz];
	}
	else {
		return inf;
	}
}

void int_stack::pop() {
	if (!empty()) {
		data[topz] = 0;
		topz--;
	}
}

void int_stack::push(int a) {
	data[++topz] = a;
}

void int_stack::create(int n) {
	topz = 0;
	for (int i = 1, tp; i <= n; i++) {
		cin >> tp;
		push(tp);
	}
}

void Stack_test()
{

	string op;
	int tp;
	cout << "������Ҫ���еĲ�����" << endl;
	cout << "����'create n'�Գ�ʼ��һ����СΪn��ջ " << endl;
	int_stack sta;

	while (cin >> op) {
		if (op == "create") {
			cin >> tp;
			if (tp) {
				cout << "������Ԫ�أ�" << endl;
				sta.create(tp);
			}
			break;
		}
		else {
			cout << "ָ�����" << endl;
		}
	}
	cout << "������Ҫ���еĲ�����" << endl;
	cout << "����'size' ����ջ��С " << endl;
	cout << "����'push n' ������һ��Ԫ��n " << endl;
	cout << "����'top' �Ի�ȡ��ǰջ��Ԫ�� " << endl;
	cout << "����'empty' �ж�ջ�Ƿ�Ϊ�� " << endl;
	cout << "����'pop' �Ե�����ǰջ��Ԫ�� " << endl;
	cout << "����'end' �Խ��� " << endl;
	while (cin >> op) {
		if (op == "end") {
			break;
		}
		else if (op == "size") {
			cout << "��ǰջ��С��" << sta.size() << endl;
		}
		else if (op == "push") {
			cin >> tp;
			sta.push(tp);
		}
		else if (op == "top") {
			cout << "��ǰջ��Ԫ�أ�" << sta.top() << endl;
		}
		else if (op == "pop") {
			if (sta.empty()) {
				cout << "��ǰջΪ�� " << endl;
			}
			else {
				cout << "����Ԫ�أ�" << sta.top() << endl;
				sta.pop();
			}
		}
		else if (op == "empty") {
			if (sta.empty()) {
				cout << "��ǰջΪ�� " << endl;
			}
			else {
				cout << "��ǰջ�ǿ� " << endl;
			}
		}
		else {
			cout << "ָ�����" << endl;
		}
		cout << "������Ҫ���еĲ�����" << endl;
	}
}

int main()
{
	string op;
	cout << "������Ҫ���еĲ�����" << endl;
	cout << "����'stack' �Բ���stack�� " << endl;
	cout << "����'end' �Խ��� " << endl;
	while (cin >> op) {
		if (op == "end") {
			break;
		}
		else if (op == "stack") {
			Stack_test();
		}
		else {
			cout << "ָ�����" << endl;
		}
		cout << "������Ҫ���еĲ�����" << endl;
		cout << "����'stack' �Բ���stack�� " << endl;
		cout << "����'end' �Խ��� " << endl;
	}
	system("pause");

	return 0;
}
