#include <stdio.h>
int main()
{
     /* Pointer to the file */
     FILE *fp1;
     /* Character variable to read the content of file */
     char c;

     /* Opening a file in r mode*/
     fp1= fopen ("C:/text/symum.txt", "r");

     /* Infinite loop –I have used break to come out of the loop*/
     while(1)
     {
        c = fgetc(fp1);
        if(c==EOF)
            break;
        else
        {
            if(c==' ')
                continue;
            printf("%c", c);
        }
     }
     fclose(fp1);
     return 0;
}
