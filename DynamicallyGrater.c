// ID: 190204105
// NAME: MD. SYMUM HOSSAIN

#include<stdio.h>
int main()
{
    int *fp,n,i,j;
    printf("how many integer you want to store?? : ");
    scanf("%d",&n);

    fp=(int*)calloc(n,sizeof(int));
    printf("Enter the elements here: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&fp[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(fp[i]<fp[j])
            {
                int temp;
                temp=fp[i];
                fp[i]=fp[j];
                fp[j]=temp;
            }
        }
    }
    printf("\nThe Largest element is: %d\n",fp[0]);
    free(fp);
}

