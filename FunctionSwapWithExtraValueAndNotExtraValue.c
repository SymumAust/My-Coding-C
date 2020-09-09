#include<stdio.h>
int swap(int, int);
int withoutExtraValue(int, int);
int main()
{
    int x,y,n;
    printf("Enter 1 for without extra variable swapping\nEnter 2 for using extra variable swapping\n: ");
    scanf("%d",&n);
    if(n==1)
    {
        printf("Enter your elements: ");
        scanf("%d",&x);
        scanf("%d",&y);
        withoutExtraValue(x,y);
    }
    else if(n==2)
    {
        printf("Enter your elements: ");
        scanf("%d",&x);
        scanf("%d",&y);
        swap(x,y);
    }
    return 0;
}
int withoutExtraValue(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n%d\t%d",a,b);
    return 0;

}
int swap(int m, int n)
{
    int temp;
    temp=m;
    m=n;
    n=temp;
    printf("\n%d\t%d",m,n);
}
