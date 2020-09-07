#include<stdio.h>
int main()
{
    char x[100],r[100];
    int i,length=0,j;
    printf("Enter any string: ");
    gets(x);
    i=0;
    while(x[i]!='\0')
    {
        length++;
        i++;
    }
    length--;
    j=0;
    while(x[j]!='\0')
    {
        r[j]=x[length];
        length--;
        j++;
    }
    r[j]='\0';
    printf("\nThe reverse string is: %s\n",r);
}

