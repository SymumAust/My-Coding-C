#include<stdio.h>
int main()
{
    int arr[3][3]={4,3,3,4,5,6,13,1,9};
    int swap,i,j,small;
for (i = 0; i < 3; i++)
{
    for (j = 0; j <3; j++)
    {
        if(*(*(arr+i)+j) > *(*(arr+i)+j+1))
        {
            swap = *(*(arr+i)+j);
            *(*(arr+i)+j) = *(*(arr+i)+j+1);
            *(*(arr+i)+j+1) = swap;
        }
    }
}

for(i=0;i<3;i++){
    if(*(*(arr+i)+0) < *(*(arr+i+1)+0)){
        small=*(*(arr+i)+0);
    }
}
 printf("%d\n",small);
}
