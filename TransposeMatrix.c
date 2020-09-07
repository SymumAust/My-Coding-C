#include <stdio.h>
int main()
{
    int a[100][100], transpose[100][100], r, c, i, j;
    printf("Enter the row and column numbers: ");
    scanf("%d %d", &r, &c);
    printf("\nEnter matrix elements:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            scanf("%d", &a[i][j]);
        }
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            transpose[j][i] = a[i][j];
        }
    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < c; ++i)
        for (j = 0; j < r; ++j)
        {
            printf("%d  ", transpose[i][j]);
            if (j == r - 1)
                printf("\n");
        }
    return 0;
}
