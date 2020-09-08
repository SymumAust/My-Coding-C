// ID: 190204105
// NAME: MD. SYMUM HOSSAIN

#include<stdio.h>
int main()
{
    char st[100];
    char *pt;
    gets(st);
    int v=0, c=0;
    pt= &st;
    while (*pt != '\0')
    {
        if(*pt=='a' || *pt=='e' ||*pt=='i'||*pt=='o' ||*pt=='u'||*pt=='A'||*pt=='E'||*pt=='O'||*pt=='I'||*pt=='U')
            v++;
        else
            c++;
        pt++;
    }
    printf("\nNumber of Vowels: %d\nNumber of Consonant: %d \n",v,c);
}
