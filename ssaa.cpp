#include<stdio.h>
#include<iostream.h>
struct date
{
	int year;
	int month; 
	int day;
	
	
date getDate()
{		
		date Date1;
		printf("input year:");
		scanf("%d",&Date1.year);
		printf("input month:");
		scanf("%d",&Date1.month);
		printf("input day:");
		scanf("%d",&Date1.day);
		
		cout<<"年:"<<Date1.year<<"月:"<<Date1.month<<"日:"<<Date1.day<<endl;
		return Date1;
}
date xx()
{
		date Date2;
		int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
		int yy,mm,dd,days;
		int i;
		printf("输入年份:");
		scanf("%d",&yy);
		printf("输入月份:");
		scanf("%d",&mm);
		printf("输入日:");
		scanf("%d",&dd);
		if(mm>2&&((yy%4==0&&yy%100!=0)||yy%400==0))
	{
		days=1;
	}
	else
	{
		days=0;
	}
	for(i=0;i<mm-1;i++)
		days+=month[i];
		days+=dd;
		printf("这是%d年的第%d天\n", yy,days);
		return Date2;
}

};
int main()
{
	date Date1;
	Date1.getDate();
	date Date2;
	Date2.xx();
	
	return 0;
}
