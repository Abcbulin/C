#include<stdio.h>
// һ�����߰�ʮ��������ʮһ��
// ��������ж�ʮ����
void main()
{
    int Mon[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int year,month,day;
    int i;
    int a,b,c;
    printf("�ֱ�������ݣ��·ݣ����� : \n");
    scanf("%d %d %d",&year,&month,&day);
    c = year;
    if(year%4==0)
    {
        year = 1; //����
        if (year%100==0&&year%400!=0)
        {
            year = 0; //ƽ��
        }
        Mon[1] = 29;   
    }
    else
    {
        year = 0;
    }
    if (year==0&&month==2&&day==29)
    {
        printf("ƽ��2��ֻ��28��");
    }
    else if (month > 12)
    {
        printf("һ�����ֻ��12��\n");
        printf("����������");
    }
    else
    {     
        for (size_t i = 0; i < month-1; i++) //11
        {
            if (day>Mon[month-1])
            {
                printf("%d��%d�����ֻ��%d��",c,month,Mon[i+1]);
            }
            else
            {
                b += Mon[i];
            }
            a = b + day;
        }  
        printf("%d��%d��%d������һ��ĵ�%d��",c,month,day,a);
    }

}