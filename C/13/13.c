/*
程序分析：对n进行分解质因数，应先找到一个最小的质数k，然后按下述步骤完成：
如果这个质数恰等于n，则说明分解质因数的过程已经结束，打印出即可。
如果n>k，但n能被k整除，则应打印出k的值，并用n除以k的商，作为新的正整数你n，重复执行第一步。
如果n不能被k整除，则用k+1作为k的值，重复执行第一步。
*/
#include<stdio.h>
void main()
{
    int a,b[20],c,i,n=0;
    printf("输入要分解质因数的数字 : ");
    scanf("%d",&a);
    c=a; // 记录初始值
    for (i = 2; a!=1;)
    {
        if (a%i==0)
        {
            b[n]=i;
            n++;
            a=a/i;
            i=2;
        }
        else
        {
            i++;
        }
    }
    printf("%d=",c);
    printf("%d",b[0]);
    for (size_t i = 1; i < n; i++)
    {
        printf("*%d",b[i]);
    }
    printf("\n");
    
}