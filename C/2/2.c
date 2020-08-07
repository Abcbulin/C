#include<stdio.h>
#include<stdlib.h>
float profit(float crop)
{
    float push_money;
    if(0<=crop&&crop<=10e4)
    {   
        push_money = crop*0.1;
        printf("提成为 : %f",push_money);
    }
    if (10e4<crop&&crop<=20e4)
    {
        push_money = (crop-10e4)*0.075+10e4*0.1;
        printf("提成为 : %f",push_money);
    }
    if (20e4<crop&&crop<=40e4)
    {
        push_money = (crop-20e4)*0.05+10e4*0.1+10e4*0.075;
        printf("提成为 : %f",push_money);
    }
    if (40e4<crop&&crop<=60e4)
    {
        push_money = (crop-40e4)*0.03+10e4*0.1+10e4*0.075+20e4*0.05;
        printf("提成为 : %f",push_money);
    }
    if (60e4<crop&&crop<=10e4)
    {
        push_money = (crop-60e4)*0.015+10e4*0.1+10e4*0.075+20e4*0.05+20e4*0.03;
        printf("提成为 : %f",push_money);
    }
    if (10e5<crop)
    {
        push_money = (crop-10e5)*0.01+10e4*0.1+10e4*0.075+20e4*0.05+20e4*0.03+40e4*0.015;
        printf("提成为 :%f",push_money);
    }
}
void main()
{
    float n;
    printf("利润为 : ");
    scanf("%f",&n);
    profit(n);
    printf("\n");
    system("pause");
}