#include <iostream>
using namespace std;
void swap(int a,int b)
{
    int temp;
    temp=b;
    b=a;
    a=temp;
    cout<<"�������a="<<a<<endl;
    cout<<"�������b="<<b;
}
void swap(double c,double d)
{
    double temp;
    temp=c;
    c=d;
    d=temp;
    cout<<"�������c="<<c<<endl;
    cout<<"�������d="<<d;
}
void swap(char e,char f)
{
    char temp;
    temp=f;
    f=e;
    e=temp;
    cout<<"�������e="<<e<<endl;
    cout<<"�������f="<<f;
}
void choice(int x)
{
    int a,b;
    double c,d;
    char e,f;
    cout<<"��Ҫ������������������1"<<endl;
    cout<<"��Ҫ��������С��������2"<<endl;
    cout<<"��Ҫ���������ַ�������3"<<endl;
    cin>>x;
    switch(x)
    {
        case 1:
            cout<<"��������������a,b:"<<endl;
            cin>>a>>b;
            swap(a,b);
            break;
        case 2:
            cout<<"����������С��c,d:"<<endl;
            cin>>c>>d;
            swap(c,d);
            break;
        case 3:
            cout<<"�����������ַ�e,f:"<<endl;
            cin>>e>>f;
            swap(e,f);
            break;
        default:
            cout<<"��������";
    }

}
int main()
{
    int x;
    choice(x);
    return 0;
}
