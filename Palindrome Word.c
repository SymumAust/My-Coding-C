// ID: 190204105
// NAME: MD. SYMUM HOSSAIN

#include<stdio.h>
#include<string.h>
int main()
{
    char x[100];
    printf("Please Input a String: ");
    gets(x);
    char y[100];
    strcpy(y,x);
    strrev(x);
    if(strcmp(y,x)==0)
        printf("\nInputted string is a Palindrome.\n");
    else
        printf("\nInputted string is not a Palindrome.\n");
}
