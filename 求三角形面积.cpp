#include <iostream>
#include <cmath>
using namespace std;
//ͨ���������������������ε����
int main()
{
    const double* d;
    double p;
    double a,b,c,s;
    cout<<"���������������ε�������:"<<endl;
    cin>>a>>b>>c;
    p=(a+b+c)/2;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<"�������ε����Ϊ:"<<s;
    return 0;
}
