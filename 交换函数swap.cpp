#include <iostream>
using namespace std;
void swap(int a,int b)
{
    int temp;
    temp=b;
    b=a;
    a=temp;
    cout<<"交换后的a="<<a<<endl;
    cout<<"交换后的b="<<b;
}
void swap(double c,double d)
{
    double temp;
    temp=c;
    c=d;
    d=temp;
    cout<<"交换后的c="<<c<<endl;
    cout<<"交换后的d="<<d;
}
void swap(char e,char f)
{
    char temp;
    temp=f;
    f=e;
    e=temp;
    cout<<"交换后的e="<<e<<endl;
    cout<<"交换后的f="<<f;
}
void choice(int x)
{
    int a,b;
    double c,d;
    char e,f;
    cout<<"若要输入两个整数请输入1"<<endl;
    cout<<"若要输入两个小数请输入2"<<endl;
    cout<<"若要输入两个字符请输入3"<<endl;
    cin>>x;
    switch(x)
    {
        case 1:
            cout<<"请输入两个整数a,b:"<<endl;
            cin>>a>>b;
            swap(a,b);
            break;
        case 2:
            cout<<"请输入两个小数c,d:"<<endl;
            cin>>c>>d;
            swap(c,d);
            break;
        case 3:
            cout<<"请输入两个字符e,f:"<<endl;
            cin>>e>>f;
            swap(e,f);
            break;
        default:
            cout<<"输入有误";
    }

}
int main()
{
    int x;
    choice(x);
    return 0;
}
