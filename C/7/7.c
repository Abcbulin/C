#include<stdio.h>
void main()
{
    for (size_t i = 1; i < 10; i++)
    {
        for (size_t a = 1; a <= i;a++)
        {
            printf("%dx%d=%d\t",i,a,i*a);
        }
        printf("\n");
    }
    
}