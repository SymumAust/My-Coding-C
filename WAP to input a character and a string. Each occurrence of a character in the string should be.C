#include<stdio.h>
int main()
{
    char str [81];
    int i;
    printf("Enter a line of text:\n");
    gets(str);
    i = 0;
    while (str[i] != '\0')
    {

        if (str[i]>='a' && str[i]<='z')
            //Convert lowercase to uppercase
            str[i] = str[i] - 32;
        else if(str[i]>='A' && str[i]<='Z')
            //Convert uppercase to lowercase
            str[i] = str[i] + 32;
        i++;
    }

    printf("%s",str);

}
