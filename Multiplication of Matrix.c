#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x[100][100],y[100][100],z[100][100],i,j,k,l,a,b,c;
    printf("Enter row and column number of first matrix: ");
    scanf("%d%d",&i,&j);
    printf("Enter row and column number of second matrix: ");
    scanf("%d%d",&k,&l);
    if(j!=k)
    {
        printf("\nMultiplication not porssble\n");
        exit(0);
    }
    printf("Enter elements of first matrix: ");
    for(a=0;a<i;a++)
    {
        for(b=0;b<j;b++)
            scanf("%d",&x[a][b]);
    }
    printf("Enter elements of secod matrix: ");
    for(a=0;a<k;a++)
    {
        for(b=0;b<l;b++)
            scanf("%d",&y[a][b]);
    }
    for(a=0;a<i;a++)
    {
        for(b=0;b<l;b++)
        {
            z[a][b]=0;
        }
    }
    for(a=0;a<i;a++)
    {
        for(b=0;b<l;b++)
        {
            for(c=0;c<j;c++)
            {
            z[a][b]=x[a][c]*y[c][b]+z[a][b];
            }
        }
    }
    printf("\nMultiplicated Matrix is given below: \n\n");
    for(a=0; a<i; a++)
    {
        for(b=0; b<l; b++)
        {
            printf(" %d ",z[a][b]);
            if(b==l-1)
            {
                printf("\n");
            }
        }
    }

}

