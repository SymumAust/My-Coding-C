#include<stdio.h>

int min(int n1, int n2)
{
    if(n1>n2)
        return n2;
    else return n1;
}
int checkAddition(char str[], int i, int j)
{
    if(i==j)
        return 0;
    else if(i ==  j-1)
    {
        if(str[i] == str[j])
            return 0;
        else
            return 1;
    }
    else if(str[i] == str[j])
        return checkAddition(str, i+1, j-1);
    else if(str[i] != str[j])
    {
        int val1 = checkAddition(str, i+1, j);
        int val2 = checkAddition(str, i, j-1);

        return min(val1, val2) + 1;
    }
}
void main()
{
    char st[] = "tanveer";
    int check = checkAddition(st,0, strlen(st)-1);
    printf("%d",check);
}
