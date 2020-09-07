#include <stdio.h>

int main()
{
    char text[100], blank[100];
    int c = 0, d = 0;

    printf("Enter some text\n");
    gets(text);

    while (text[c] != '\0')
    {
        if (!(text[c] == ' ' && text[c+1] == ' '))
        {
            blank[d] = text[c];
            d++;
        }
        c++;
    }

    blank[d] = '\0';
    d=0;
    int l=0;
    char y[100];

    while(blank[d]!='\0')
    {
        if(blank[d]== ' ' && d==0)
        {
            d++;
            y[l]=blank[d];
            d++;
            l++;

        }
        else
        {
            y[l]=blank[d];
            d++;
            l++;
        }
    }
    y[l]='\0';
    printf("Text after removing blanks\n%s\n", y);


    return 0;
}
