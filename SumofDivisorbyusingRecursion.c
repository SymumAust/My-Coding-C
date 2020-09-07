// ID: 190204105
// NAME: MD. SYMUM HOSSAIN

#include<stdio.h>
int sumOfDivisor(x,i,s);
int s=0;
int main()
{
    int i=2,sum=0;
    int x;
    scanf("%d",&x);
    sum=sumOfDivisor(x,i,s);
    printf("Sum of Divisor: %d\n",sum);
}
int sumOfDivisor(x,i,s)
{
    if(i<=x/2)
    {
        if(x%i==0)
        {
            s=s+i;
            i++;
            sumOfDivisor(x,i,s);
        }
        else
        {
            i++;
            sumOfDivisor(x,i,s);
        }
    }
    else
        return s;


}
