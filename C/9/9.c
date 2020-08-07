#include<stdio.h>
void main()
{
    char zuo = '(';
    char you = ')';
    char xing = '*';
    char mei = '^';
    char zui = '_';
    // 正常人应该都不会这样...颜文字数组可以一试..emm
    printf("%c%c%c%c%c%c%c",zuo,xing,mei,zui,mei,xing,you);
    printf("\t%c%c%c%c%c%c%c\n",zuo,xing,mei,zui,mei,xing,you);
    for (size_t i = 0; i < 7; i++)
    {
        for (size_t j = 0; j <= i; j++)
        {
            printf("%c%c",168,128);
        }
        printf("\n");
    }
    
}