#include<stdio.h>
void main()
{
    int list[4] = {1,2,3,4};
    int i,j,m,a,sum[100];
    a = 0;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for(m = 0; m < 4; m++)
            {
                if (list[j] != list[i] && list[m] != list[j])
                {
                    sum[a] = list[i]*100 + list[j]*10 + list[m];
                    a++;
                }
            }
        }
    }
    printf("��������������У�\n");
    for (size_t i = 0; i < a; i++)
    {
        printf("%5d",sum[i]);
    }
    printf("\nһ����%d������������",a);
    
}