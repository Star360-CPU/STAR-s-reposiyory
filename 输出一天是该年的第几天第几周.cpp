#include <stdio.h>
#include <iostream>
using namespace std;
int allMonth[]={31,28,31,30,31,30,31,31,30,31,30,31};
int allDay;
int main()
{
    int year,month,day;
    int wday(int year,int month,int day);
    void wweek(int year,int month,int day,int allDay);
    cout<<"�밴��XXXX-XX-XX�ĸ�ʽ�����ꡢ�¡���:"<<endl;
    scanf("%d-%d-%d",&year,&month,&day);
    wday(year,month,day);
    wweek(year,month,day,allDay);
    return 0;
}
/*��������Ǹ���ĵڼ���*/
int wday(int year,int month,int day)
{
     /*�ж������껹��ƽ��*/
    if((year/100)%4==0)                //����,2��29��
        allMonth[1]=29;
    else                               //ƽ��,2��28��
        allMonth[1]=28;
    /*�������ж�*/
    if(month>12||month<1)
        {
            cout<<"�·��������"<<endl;
            return 0;
        }
    if(day>allMonth[month-1])
        {
            cout<<"�����������"<<endl;
            return 0;
        }
    for(int i=0;i<month-1;i++)
        allDay+=allMonth[i];
    allDay+=day;
    cout<<"�����Ǹ���ĵ�"<<allDay<<"��"<<endl;
}
/*��������Ǹ���ڼ���*/
/*w=y+[y/4]+[c/4]-2c+[26(m+1)/10]+d-1 ���չ�ʽ����ʽ�еķ��ź������£�w�����ڣ�c������-1��y���꣨��λ������
m���£�m���ڵ���3��С�ڵ���14�����ڲ��չ�ʽ�У�ĳ���1��2��Ҫ������һ���13��14�������㣬����2003��1��1��Ҫ����2002���13��1�������㣩��
d���գ�[ ]����ȡ������ֻҪ�������֡�(C����������һ��y����ݺ���λ��M���·ݣ�d��������
1�º�2��Ҫ����һ���13�º� 14�����㣬��ʱC��y������һ��ȡֵ���������W����7�������Ǽ��������ڼ������������0����Ϊ�����ա�*/
int wweek(int year,int month,int day,int allDay){
    if(month>12||month<1)
        {
            cout<<"�·��������"<<endl;
            return 0;
        }
    if(day>allMonth[month-1])
        {
            cout<<"�����������"<<endl;
            return 0;
        }
    		int i,j,k;
		int c=year/100;
		int y=year-c*100;
		int week=int(c/4)-2*c+int(y+y/4)+int(13*(month+1)/5)+day-1;
				while(week<0){ week+=7; }
		week%=7;
		switch(week)
		{
		case 1: printf("Monday\n"); break;
		case 2: printf("Tuesday\n"); break;
		case 3: printf("Wednesday\n"); break;
		case 4: printf("Thursday\n");break;
		case 5: printf("Friday\n"); break;
		case 6: printf("Saturday\n");break;
		case 0: printf("Sunday\n"); break;}
    cout<<year<<"��"<<month<<"��"<<day<<"��,�Ǹ����"<<week<<"��"<<endl;
    return 0;
}
