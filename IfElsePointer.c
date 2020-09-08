// ID: 190204105
// NAME: MD. SYMUM HOSSAIN

#include<stdio.h>
int main()
{
    int a,b, *ptr1, *ptr2;
    scanf("%d%d",&a,&b);

    ptr1=&a;
    ptr2=&b;
    if(*ptr1>*ptr2)
        printf("%d is Greater\n",*ptr1);
    else if(*ptr1<*ptr2)
        printf("%d is Greater\n",*ptr2);
}
