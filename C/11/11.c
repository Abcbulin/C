#include<stdio.h>
#include<math.h>
void main()
{
    int i,n=0,a=1;
    for(i = 101; i<=200; i+=2)
    {
        for(size_t b=2; b<(int)(sqrt(i));b++)
        {
            if (i%b == 0)
            {
                a=0;
            }
            
        }
        if (a!=0)
        {
            printf("%d  ",i);
            n++;
        }
        a=1;
    }
    printf("\n");
    printf("ËØÊýÓÐ%d¸ö",n);
}