#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct hotel_info
{
    char HotelName[50];
    char HotelAddress[50];
    float RoomCharge;
    int NumberOfRooms;
} hotel;

hotel temp;

void input()
{
    FILE *fp;
    fp= fopen ("H:\Codeblocks:\hotel.txt","a+");
    if(fp == NULL)
        printf("Error to open the file\n");
    else
    {
        printf("Enter name of Hotel: ");
        fflush(stdin);
        gets(temp.HotelName);
        printf("Enter Hotel address: ");
        fflush(stdin);
        gets(temp.HotelAddress);
        printf("Enter Room Charge: ");
        fflush(stdin);
        scanf("%f",&temp.RoomCharge);
        printf("Enter Room Number: ");
        scanf("%d",&temp.NumberOfRooms);

        fwrite(&temp,sizeof(hotel),1,fp);
        if(fwrite!=0)
        {
            printf("Contents written Successfully\n");
        }
        else
        {
            printf("Error writing file !\n");
        }
        fclose(fp);
    }
}

void display()
{
    FILE *fp;
    fp= fopen("H:\Codeblocks:\hotel.txt","r");
    int k=1;
    if(fp== NULL)
    {
        printf("Error to open file\n");
    }
    else
    {
        while(fread(&temp, sizeof(hotel),1,fp))
        {
            printf("%d. Hotel Name: %s\nAddress: %s\nHotel Charges: %.2f\nRoom Number: %d\n",k,temp.HotelName,temp.HotelAddress,temp.RoomCharge,temp.NumberOfRooms);
            k++;
            printf("\n");
        }
        fclose(fp);
    }
}


void search()
{
    FILE *fp;
    fp=fopen("H:\Codeblocks:\hotel.txt","r");
    if(fp==NULL)
    {
        printf("Error to open file\n");
    }
    else
    {
        int flag=0,l=0,i=1;
        float data;
        printf("Enter the Charge within you want any hotel: \n");
        scanf("%f",&data);
        while(fread(&temp,sizeof(hotel),1,fp))
        {
            if(temp.RoomCharge<=data)
            {
                l++;
                if(l==1)
                {
                    printf("HOTELS FOUND\n\n");
                }
                printf("%d. Hotel Name: %s\nAddress: %s\nHotel Charges: %.2f\nRoom Number: %d\n",i,temp.HotelName,temp.HotelAddress,temp.RoomCharge,temp.NumberOfRooms);
                i++;
                printf("\n");
                flag++;

            }
        }
        if(flag==0)
            printf("NO HOTELS FOUND\n");
    }
    fclose(fp);
}


int main()
{
    int UserInput;
    while(1)
    {
        printf("Press 1 for Input\nPress 2 for Display\nPress 3 for search Room with a given Charges\nPress 0 for Exit\n\n");
        scanf("%d",&UserInput);
        printf("\n");
        if(UserInput==1)
            input();
        else if(UserInput==2)
            display();
        else if(UserInput==3)
            search();
        else if(UserInput==0)
        {
            printf("Successfully Executed");
            break;

        }

    }

}
