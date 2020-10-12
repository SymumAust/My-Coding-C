#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

typedef struct Student
{
    int id;
    char name[30];
    char email[30];
} sData;

sData temp;
int data;

void input()
{
    FILE *fp;
    fp= fopen("student information system.txt","a+");
    if(fp== NULL)
        printf("Error to open the file\n");
    else
    {
        printf("Enter Student ID: \n");
        scanf("%d",&temp.id);
        fflush(stdin);
        printf("Enter Student Name: \n");
        gets(temp.name);
        printf("Enter Student E-mail: \n");
        gets(temp.email);
        fwrite(&temp, sizeof(temp),1,fp);
        if(fwrite!=0)
            printf("\n\nContents to file written successfully\n\n");
        else
            printf("\n\nError writing file !\n\n");
        fclose(fp);
    }
}

void display()
{
    FILE *fp;
    fp= fopen("student information system.txt","r");
    if(fp== NULL)
    {
        printf("Error to open the file\n");
        printf("\nPlease check ensure that you entered anything in your system!!\nThe system file shouldn't be empty first time\nHint: Go for insert Records\n\n");
    }
    else
    {
        while(fread(&temp, sizeof(temp), 1, fp))
        {
            printf("ID = %d\nName = %s\nEmail = %s\n\n",temp.id,temp.name,temp.email);
        }
        printf("\n\n");
        fclose(fp);
    }

}

void removedata()
{
    FILE *fp;
    FILE *fp1;

    fp = fopen("student information system.txt","r");
    fp1 = fopen("temporary.txt","w");

    if(fp==NULL || fp1== NULL)
    {
        printf("Error to open file\n");
    }
    else
    {
        printf("Enter the ID of student: ");
        scanf("%d",&data);
        while(fread(&temp, sizeof(sData),1,fp))
        {
            if(temp.id!=data)
            {
                fwrite(&temp, sizeof(temp),1,fp1);

            }
        }


        fclose(fp);
        fclose(fp1);

        remove("student information system.txt");
        rename("temporary.txt","student information system.txt");
        printf("\nSuccessfully deleted\n\n");
    }
}

void modify()
{
    FILE *fp;
    fp = fopen("student information system.txt","r+");


    if(fp==NULL )
    {
        printf("Error to open file\n");
    }
    else
    {
        int flag=0;
        printf("Enter the ID of student: ");
        scanf("%d",&data);

        while(fread(&temp, sizeof(sData), 1, fp)==1)
        {
            if(temp.id==data)
            {
                       printf("Enter New Student ID: \n");
                        scanf("%d",&temp.id);
                        fflush(stdin);
                        printf("Enter New Student Name: \n");
                        gets(temp.name);
                        printf("Enter New Student E-mail: \n");
                        gets(temp.email);
                        fseek(fp,-sizeof(sData),SEEK_CUR);
                        fwrite(&temp,sizeof(sData),1,fp);
                        flag++;
                        break;
                }
        }
        printf("\n\n");

        if(flag==0)
            printf("ID not found\n");
    }
    fclose(fp);
}



void search()
{
    FILE *fp;
    fp = fopen("student information system.txt","r");

    if(fp==NULL )
    {
        printf("Error to open file\n");
    }
    else
    {
        int flag=0;
        printf("Enter the ID you want: ");
        scanf("%d",&data);

        // {

        while(fread(&temp, sizeof(sData), 1, fp))
        {
            if(temp.id==data)
            {
                printf("\n\nID found\n\n");
                printf("ID = %d\nName = %s\nEmail = %s\n\n",temp.id, temp.name, temp.email);
                flag++;
            }
        }
        // }
        if(flag==0)
            printf("\n\nID not found\n\n");
    }
    fclose(fp);
}





int main()
{
    int userInput;
    while(1)
    {
        printf("Click 1: Insert Students Records\nClick 2: Read Records\nClick 3: Modify Information\nClick 4: Delete Information\nClick 5: Search Information\nClick 0: Exit\n\n");
        scanf("%d",&userInput);
        if(userInput==1)
        {
            input();
        }
        else if(userInput==2)
            display();
        else if(userInput==3)
            modify();
        else if(userInput==4)
            removedata();
        else if(userInput==5)
            search();
         else if(userInput==0)
        {
            printf("Successfully Executed");
            break;
        }


    }
    printf("\n\n");
}
