//ID: 190204105
//NAME: MD. SYMUM HOSSAIN

#include<stdio.h>
int main()
{
    int arr[100],i,j,temp=0,n,k;
    printf("The Number of Values: ");
    scanf("%d",&n);
    printf("Enter the values: ");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the Kth term: ");
    scanf("%d",&k);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                temp= arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Sorted values are: \n");
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
    printf("\nThe %dth Minimum is %d: \n",k,arr[k-1]);





}
