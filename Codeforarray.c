#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[100]= {0},m=0,c=0,l,n,i,c1,j,g=0,v=1,q=0,f=0,w=0;
    while(1)
    {
        printf("PRESS 1 for input into array:\nPRESS 2 for display the element:\nPRESS 3 for exit the program: \n\n");
        scanf("%d",&n);
        if(n==1)
        {

            if(v!=1)
            {
                m=c;
            }
            printf("Enter how many numbers you will input: \n\n");

            scanf("%d",&l);
            c=c+l;
            printf("Enter your elements: \n\n");


            for(i=m; i<c; i++)
            {
                q++;
                scanf("%d",&arr[i]);
            }
            v++;

            printf("Numbers written successfully\n\n");


        }
        else if(n==2)
        {
            f++;

            g++;
            c--;
            if(f>q)
            {
                w++;
                printf("No values available to popup.\n\n");
                continue;
            }
            if (w==0)
            {
                printf("first value is: %d \n",arr[0]);
                //printf("%d\n\n",arr[0]);
            }


            for(j=0; j<c; j++)
            {
                arr[j]=arr[j+1];
            }
        }
        else if(n==3)
            exit(0);
    }

}
