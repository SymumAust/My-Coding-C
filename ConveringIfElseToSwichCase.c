#include<stdio.h>
int main()
{
    int a=5,b=10,c=15,choice;
    {
        switch(a>b && a>c)
        {
        case 1:
            {
                printf("%d",a);
                break;
            }
        case 0:
            {
                switch(b>c)
                {
                case 1:
                    {
                        printf("%d",b);
                        break;
                    }
                case 0:
                    {
                        printf("%d",c);
                        break;
                    }
                }
            }
        }
    }
}
