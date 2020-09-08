// ID: 190204105
// NAME: MD. SYMUM HOSSAIN

#include<stdio.h>
int main()
{
    int x[100][100],i,j,k,l,n,*fp;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&(*(*(x+i)+j)));
        }
    }
    int temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            temp = x[i][j];
            l = j + 1;
            for (k = i; k < n; k++)
            {
                while (l < n)
                {
                    if (temp <*(*(x+k)+l))
                    {
                        temp = *(*(x+k)+l);
                        *(*(x+k)+l) = *(*(x+i)+j);
                        *(*(x+i)+j) = temp;
                    }
                    l++;
                }
                l = 0;
            }
        }
    }
    int x1=n-1;


    printf("The smallest value is: %d\n",*(*(x+x1)+x1));


}
