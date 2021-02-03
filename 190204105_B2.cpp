#include<bits/stdc++.h>
using namespace std;

struct Student
{
    char name[100];
    double cgpa;

};


int main()
{
    struct Student e[100];
    FILE *fp;
    fp = fopen("Data.txt","r");
    if(fp== NULL)
    {
        cout<<"Cannot Open";
        return 1;
    }
    int n,j,k,i;

    while(1)
    {
        int s1 = fscanf(fp,"%d",&n);
        fflush(stdin);
        for(i=0; i<n; i++)
        {
            int s =fscanf(fp,"%s %lf",&e[i].name,&e[i].cgpa);
            for(j=i+1; j<3; j++)
            {
                if(e[i].cgpa<e[j].cgpa)
                {
                    int temp;
                    char x[100];
                    strcpy(x,e[i].name);
                    strcpy(e[i].name,e[j].name);
                    strcpy(e[j].name,x);

                    temp= e[i].cgpa;
                    e[i].cgpa = e[j].cgpa;
                    e[j].cgpa = temp;

                }
            }
            if(s==EOF)
        {
            break;
        }
        }
        if(s1 == EOF)
            break;


    }
    fclose(fp);

    fp = fopen("sortedData.txt","w");
    if(fp==NULL)
    {
        cout<<"fails to write";
        return 1;
    }
    for(k=0; k<n; k++)
    {
        fprintf(fp,"%s %lf\n",e[k].name,e[k].cgpa);
    }

    fclose(fp);



}
