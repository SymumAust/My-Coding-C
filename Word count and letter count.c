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
    l=0;
    int a=0;
    int count=0;
    while(y[l]!='\0')
    {
        if(y[l]==' ')
            count++;
        a++;
        l++;
    }
    count++;
    int m=0;
    m=a-(count-1);
    printf("The Number of word is: %d\n\nThe number of letter is: %d\n",(count), m);


    return 0;
}
