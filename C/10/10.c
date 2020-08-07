#include<stdio.h>
void main()
{
    int list[2] = {0,1};
    int j,a;
    printf("输入月份 : ");
    scanf("%d",&a);
    for (size_t i = 1; i <= a; ++i)
    {
        j = list[0];
        list[0]=j+list[1];
        list[1]=j;       
    }
    printf("在第%d个月时一共有兔子%d只",a,list[0]*2);
}