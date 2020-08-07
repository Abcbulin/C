#include<stdio.h>
#include<math.h>
void main()
{
    int i;
    int a,b,c;
    int d;
    for (i = 100; i < 1000; i++)
    {
        a=i%10;
        b=(i%100)/10;
        c=i/100;
        d=pow(a,3)+pow(b,3)+pow(c,3);
        if (d==i)
        {
            printf("%5d",i);
        }
        
    }
}