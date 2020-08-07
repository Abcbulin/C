#include<stdio.h>
void main()
{
    int list[3];
    int c;
    printf("分别输入3个整数 : \n");
    for (size_t i = 0; i < 3; i++)
    {
        scanf("%d",&list[i]);
    }
    for (size_t a = 1; a < 3; a++)
    {
        for (size_t b = 0; b < a+1; b++)
        {
            if (list[a]<list[b])
            {
                c = list[b];
                list[b] = list[a];
                list[a] = c;
            }
        }
    }
    printf("按照小到大的顺序排列\n");
    for (size_t i = 0; i < 3; i++)
    {
        printf("%d\t",list[i]);
    }
    
}