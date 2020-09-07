//ID: 190204105
//NAME: MD. SYMUM HOSSAIN

#include<stdio.h>
int main()
{
    int arr[100],x,sum=0,i,j;
    scanf("%d\n",&x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("Total Sum of Element= %d\n",sum);
}
