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
    cout<<"请按照XXXX-XX-XX的格式输入年、月、日:"<<endl;
    scanf("%d-%d-%d",&year,&month,&day);
    wday(year,month,day);
    wweek(year,month,day,allDay);
    return 0;
}
/*输出这天是该年的第几天*/
int wday(int year,int month,int day)
{
     /*判断是闰年还是平年*/
    if((year/100)%4==0)                //闰年,2月29天
        allMonth[1]=29;
    else                               //平年,2月28天
        allMonth[1]=28;
    /*输入后的判断*/
    if(month>12||month<1)
        {
            cout<<"月份输入错误"<<endl;
            return 0;
        }
    if(day>allMonth[month-1])
        {
            cout<<"天数输入错误"<<endl;
            return 0;
        }
    for(int i=0;i<month-1;i++)
        allDay+=allMonth[i];
    allDay+=day;
    cout<<"这天是该年的第"<<allDay<<"天"<<endl;
}
/*输出这天是该年第几周*/
/*w=y+[y/4]+[c/4]-2c+[26(m+1)/10]+d-1 蔡勒公式　公式中的符号含义如下，w：星期；c：世纪-1；y：年（两位数）；
m：月（m大于等于3，小于等于14，即在蔡勒公式中，某年的1、2月要看作上一年的13、14月来计算，比如2003年1月1日要看作2002年的13月1日来计算）；
d：日；[ ]代表取整，即只要整数部分。(C是世纪数减一，y是年份后两位，M是月份，d是日数。
1月和2月要按上一年的13月和 14月来算，这时C和y均按上一年取值。算出来的W除以7，余数是几就是星期几。如果余数是0，则为星期日。*/
int wweek(int year,int month,int day,int allDay){
    if(month>12||month<1)
        {
            cout<<"月份输入错误"<<endl;
            return 0;
        }
    if(day>allMonth[month-1])
        {
            cout<<"天数输入错误"<<endl;
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
    cout<<year<<"年"<<month<<"月"<<day<<"日,是该年第"<<week<<"周"<<endl;
    return 0;
}
