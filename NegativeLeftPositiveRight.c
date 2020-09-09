#include<stdio.h>
int main()
{
    int y[100]={0},n,i,j,k,x[100]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&y[i]);
    }
    j=0;
    for(i=0;i<n;i++)
    {
        if(y[i]<0)
        {
                x[j]=y[i];
                j++;
        }
    }
    //j++;
   for(i=0;i<n;i++)
    {
        if(y[i]>0)
        {
                x[j]=y[i];
                j++;
        }
    }
   // j--;
     for(k=0;k<n;k++)
    {
        printf("%d\t",x[k]);
    }


}
