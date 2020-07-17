#include <stdio.h>
#include <malloc.h>
//冒泡排序法
void Bubble_Sort(int *b,int n){
    for(int i = 0; i < n - 1; i ++)
        for(int j = 0; j < n-i-1; j ++)
            if(b[j] > b[j+1]){
                int temp;
                temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
            }
}
//快速排序法
void Quick_Sort(int *b,int n){
    int i,j;
    int pivot = b[0];	//设置基准值
    i = 0;
    j = n - 1;  // 列表最后一个元素
    while(i < j){
        //大于基准值者保持在原位置
        while(i < j && b[j] > pivot){	j--;}
        if(i < j){
            b[i] = b[j];
            i++;
        }
        //不大于基准值者保持在原位置
        while(i < j && b[i] <= pivot){ 	i++;}
        if(i < j){
            b[j] = b[i];
            j--;
        }
    }
    b[i] = pivot;	//基准元素归位
    if(i > 1){
        //递归地对左子序列 进行快速排序
        Quick_Sort(b,i);
    }
    if(n-i-1 > 1){
        // 递归右子序列 同上
        Quick_Sort(b+i+1,n-i-1);
    }
}
// 插入排序法
void Insertion_Sort(int *b,int n)
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
// 希尔排序法
void Shell_Sort(int *b,int n)
{
    int dk,i,j,m;
    int current;
    for(dk=n/2;dk>0;dk/=2) {
        for (i=0;i<dk;i++) {
            for(j=i+dk;j<=n;j+=dk) {
                current=b[j];
                m=j-dk;
                while (m>=0&&b[m]>current) {
                    b[m+dk]=b[m];
                    m-=dk;
                }
                b[m+dk]=current;
            }
        }
    }
}
int main(){
    int *a;
    // Create an array of ten elements
    a=(int *)malloc(10*sizeof(int));
    printf("Please enter the elements of the array :\n");
    for(int i = 0;i < 10; i ++){
        scanf("%d",&a[i]);
    }
    printf("Output the sorted array :\n");
    Shell_Sort(a,10);
    for(int i = 0; i < 10;  i++){
        printf("%d ",a[i]);
    }
}
