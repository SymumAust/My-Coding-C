#include<stdio.h>
int main()
{
    char name[100][200];
    int i;


    // reading string from user
    printf("Enter names:\n");
    for(i=0; i<10; i++)
        scanf("%s[^\n]",name[i]);

    printf("\n\n");

    // Dispaying strings
    for(i=0; i<10; i++)
    {
        if(i==0)
        {
            puts(name[4]);
            continue;
        }
        if(i==4)
        {
            puts(name[0]);
            continue;
        }
        puts(name[i]);

    }

    return 0;
}
