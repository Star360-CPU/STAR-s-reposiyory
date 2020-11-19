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
class Student {
private:
	string name;
	int gender;
	ll id;
	int bir_year;
	int bir_mon;
	int bir_day;
	string address;
	int score[7];
public:
	Student();
	Student(string, int, ll, int, int, int, string, int, int, int, int, int, int);
	Student(const Student&);
	string getname();
	string getadd();
	int getgender();
	void getbirthday();
	void getscore();
};


void Student_test();
Student::Student()
{
	cout << "请输入学生姓名" << endl;
	cin >> name;
	cout << "请输入学生性别，0为男，1为女" << endl;
	cin >> gender;
	cout << "请输入学生学号" << endl;
	cin >> id;
	cout << "请输入学生出生年 月 日（以空格隔开）" << endl;
	cin >> bir_year >> bir_mon >> bir_day;
	cout << "请输入学生家庭住址" << endl;
	cin >> address;
	cout << "请输入学生六科成绩" << endl;
	for (int i = 1; i <= 6; i++) {
		cin >> score[i];
	}
}

Student::Student(string na, int sex, ll ide, int ye, int mo, int da, string add, int s1, int s2, int s3, int s4, int s5, int s6)
{
	name = na;
	gender = sex;
	id = ide;
	bir_year = ye;
	bir_mon = mo;
	bir_day = da;
	address = add;
	score[1] = s1;
	score[2] = s2;
	score[3] = s3;
	score[4] = s4;
	score[5] = s5;
	score[6] = s6;
}

Student::Student(const Student& stu)
{
	name = stu.name;
	gender = stu.gender;
	id = stu.id;
	bir_year = stu.bir_year;
	bir_mon = stu.bir_mon;
	bir_day = stu.bir_day;
	address = stu.address;
	for (int i = 1; i <= 1; i++) {
		score[i] = stu.score[i];
	}
}

string Student::getname()
{
	return name;
}

string Student::getadd()
{
	return address;
}

int Student::getgender()
{
	return gender;
}

void Student::getbirthday()
{
	cout << "该生出生年月日：" << bir_year << "-" << bir_mon << "-" << bir_day << endl;
}

void Student::getscore()
{
	cout << "该生的六科成绩：" << endl;
	for (int i = 1; i <= 6; i++) {
		cout << score[i] << " \n"[i == 6];
	}
}

void Student_test()
{
	string op;
	cout << "创建一个学生" << endl;
	Student stu;
	cout << "请输入要进行的操作：" << endl;
	cout << "输入'name' 以获取学生姓名 " << endl;
	cout << "输入'address' 以获取学生地址 " << endl;
	cout << "输入'gender' 以获取学生性别 " << endl;
	cout << "输入'score' 以获取学生成绩 " << endl;
	cout << "输入'end' 以结束 " << endl;
	while (cin >> op) {
		if (op == "end") {
			break;
		}
		else if (op == "name") {
			cout << "学生姓名：" << stu.getname() << endl;
		}
		else if (op == "address") {
			cout << "学生住址：" << stu.getadd() << endl;
		}
		else if (op == "gender") {
			cout << "学生性别：" << (stu.getgender() ? "女" : "男") << endl;
		}
		else if (op == "birthday") {
			stu.getbirthday();
		}
		else if (op == "score") {
			stu.getscore();
		}
		else {
			cout << "指令错误！" << endl;
		}
		cout << "请输入要进行的操作：" << endl;
	}
}


int main() {

	Student stu;
	Student_test();
	return 0;
}
