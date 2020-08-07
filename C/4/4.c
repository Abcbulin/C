#include<stdio.h>
// 一三五七八十腊月有三十一天
// 闰年二月有二十九天
void main()
{
    int Mon[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int year,month,day;
    int i;
    int a,b,c;
    printf("分别输入年份，月份，天数 : \n");
    scanf("%d %d %d",&year,&month,&day);
    c = year;
    if(year%4==0)
    {
        year = 1; //闰年
        if (year%100==0&&year%400!=0)
        {
            year = 0; //平年
        }
        Mon[1] = 29;   
    }
    else
    {
        year = 0;
    }
    if (year==0&&month==2&&day==29)
    {
        printf("平年2月只有28天");
    }
    else if (month > 12)
    {
        printf("一年最多只有12月\n");
        printf("请重新输入");
    }
    else
    {     
        for (size_t i = 0; i < month-1; i++) //11
        {
            if (day>Mon[month-1])
            {
                printf("%d年%d月最多只有%d天",c,month,Mon[i+1]);
            }
            else
            {
                b += Mon[i];
            }
            a = b + day;
        }  
        printf("%d年%d月%d日是这一年的第%d天",c,month,day,a);
    }

}