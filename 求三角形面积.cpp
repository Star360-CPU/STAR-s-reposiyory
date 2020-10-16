#include <iostream>
#include <cmath>
using namespace std;
//通过输入三条边来求三角形的面积
int main()
{
    const double* d;
    double p;
    double a,b,c,s;
    cout<<"请依次输入三角形的三条边:"<<endl;
    cin>>a>>b>>c;
    p=(a+b+c)/2;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<"该三角形的面积为:"<<s;
    return 0;
}
