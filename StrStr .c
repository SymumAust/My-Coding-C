#include<stdio.h>
#include<string.h>
int main()
{
    char x[100], y[100],z[100];
    int i,j,k=0,m,n;
    gets(x);
    gets(y);
    m=strlen(x);
    n=strlen(y);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(x[i]==y[j])
            {

                z[k]=y[j];
                j++;
                k++;
                break;}
        }
    }
    z[k]='\0';
    printf("\n%s\n",z);
}
