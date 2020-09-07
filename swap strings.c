#include<stdio.h>
int main()
{
    char x[100],temp1;
    int i,temp;
    gets(x);
    i=0;
    while(x[i]!='\0')
    {
        if(i==4)
        {
            temp1=x[i];
            x[i]=x[2];
            x[2]=temp1;
        }
        i++;
    }
    printf("%s",x);
}
