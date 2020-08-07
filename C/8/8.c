#include<stdio.h>
void main()
{
    for (size_t i = 1; i < 8; i++)
    {
        if (i%2!=0)
        {
            for (size_t j = 1; j <= 4; j++)
            {
                printf("%c%c",168,128);
                printf("  ");
            }
        }
        else
            {
                for (size_t j = 1; j <= 4; j++)
                {
                    printf("  ");
                    printf("%c%c",168,128);
                }
                
            }
        printf("\n");
    }
    
}