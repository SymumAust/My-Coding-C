#include<stdio.h>
int main()
{
    int row, col, arr[100][100];
    printf("Please Enter Row Number: \n");
    scanf("%d",&row);
    printf("Please Enter Column Number: \n");
    scanf("%d",&col);

    printf("Please Enter your values: \n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Given Matrix is: \n");

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    printf("\nThe Transpose Matrix is: \n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d\t",arr[j][i]);
        }
        printf("\n");
    }



}
