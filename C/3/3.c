#include<stdio.h>
int wanshu(int n)
{
    int j,k;
    j = (n+100)/10;
    k = (n+168)/13;
    for (size_t a = 1; a < j+1; a++)
    {
        for (size_t b = 0; b < k+1; b++)
        {
            if (a*a==(n+100) && b*b==(n+168))
            {
                printf("%d",n);
            }
        }
    }
    return n;
}
void main()
{
    int n = 1;
    for (size_t n = 1; n < 1002 ; n+=5)
    {
        wanshu(n);
    }
}