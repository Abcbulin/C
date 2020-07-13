#include <stdio.h>
//ð������
void Bubble_Sort(int b[],int n){
    for(int i = 0; i < n - 1; i ++)
        for(int j = 0; j < n-i-1; j ++)
            if(b[j] > b[j+1]){
                int temp;
                temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
            }
}
//��������
void Quick_Sort(int b[],int n){
    int i,j;
    int pivot = b[0];	//���û�׼ֵ
    i = 0;
    j = n - 1;  // �б����һ��Ԫ��
    while(i < j){
        //���ڻ�׼ֵ�߱�����ԭλ��
        while(i < j && b[j] > pivot){	j--;}
        if(i < j){
            b[i] = b[j];
            i++;
        }
        //�����ڻ�׼ֵ�߱�����ԭλ��
        while(i < j && b[i] <= pivot){ 	i++;}
        if(i < j){
            b[j] = b[i];
            j--;
        }
    }
    b[i] = pivot;	//��׼Ԫ�ع�λ
    if(i > 1){
        //�ݹ�ض��������� ���п�������
        Quick_Sort(b,i);
    }
    if(n-i-1 > 1){
        // �ݹ��������� ͬ��
        Quick_Sort(b+i+1,n-i-1);
    }
}
// ��������
void Insertion_Sort(int b[],int n)
{
    int i,j,current;
    int preIndex;
    for (i=0;i<n;i++)
    {
        /* code */
        current=b[i];
        preIndex = i-1;
        while (preIndex>=0&&b[preIndex]>current)
        {
            /* code */
            b[preIndex+1]=b[preIndex];
            preIndex--;
        }
        b[preIndex+1]=current;
    }
}
int main(){
    int a[10];
    printf("Please enter the elements of the array :\n");
    for(int i = 0;i < 10; i ++){
        scanf("%d",&a[i]);
    }
    printf("Output the sorted array :\n");
    Insertion_Sort(a,10);
    for(int i = 0; i < 10;  i++){
        printf("%d ",a[i]);
    }
}
