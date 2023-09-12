#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>

struct userInfo
{
    int id[10];
    char name[20];
    char email[30];
    char phone[20];
    char adress[50];
    char gender[10];
};
struct userRequest
{

    char name[20];
    char email[30];
    char phone[20];
    char adress[50];

};
//Global variable
struct userInfo users[100];
struct userRequest request[100];
int count=0;
int flag=0;
int i,j;
int id[10];
int main()
{
    printf("\n\n\n\n\n\t\t\t\tWELCOME TO ELECTRICITY BOARD.");
     printf("\n\n\n\n\n\n\n\n\n\n\nt\t\t\t\tPress Enter to go next page.");
     getchar();
    system("cls");
    home:
    menu();
    int option;
    printf("Enter your choice:");
    scanf("%d",&option);
    switch(option)
    {
    case 1:
        {
          system("cls");
          addusers();
          goBackOrExit();
          goto home;
          break;
        }
    case 2:
        {
            system("cls");
            viewUsers();
            goBackOrExit();
            goto home;
            break;
        }
    case 3:
        {
            system("cls");
            addRequest();
            goBackOrExit();
            goto home;
            break;
        }
    case 4:
        {
            system("cls");
            viewRequest();
            goBackOrExit();
            goto home;
            break;
        }
     case 5:
        {
            system("cls");
            userGuideline();
            goBackOrExit();
            goto home;
            break;
        }
    case 0:
        {
            exit1();
            break;
            return 0;
        }
    default:
        exit1();

    }
    getch();

}
void menu()
{

    printf("\n\t\t--Select any option from below--\n\n");
    printf("\t\tHome\n");
    printf("\t\t----\n");
    printf("\t\t1. Add A New User.\n");
    printf("\t\t2. View User.\n");
    printf("\t\t3. Add a new connection request.\n");
    printf("\t\t4. View request.\n");
    printf("\t\t5. Instructions For User.\n");
    printf("\t\t0. Exit.\n");
    printf("\n\n");
}

void goBackOrExit()
{
    getchar();
    char option;
    printf("\n\tWant to Go to main menu?? press (y): ");
    scanf("%c",&option);

    if(option=='y')
    {
        system("cls");
    }
    else
    {

        printf("Invalid");
        system("cls");
    }
}
void addusers()
{

    char name[300];
    char phone[300];
    char email[300];
    char adress[300];
    char gender[300];
   printf("\n\tAdd users>>\n\n");
    printf("\tEnter Name: ");
    scanf("%s",&name);
    printf("\tEnter Phone number: ");
    scanf("%s",&phone);
    printf("\tEnter Email: ");
    scanf("%s",&email);
    printf("\tEnter Adress: ");
    scanf("%s",&adress);
    printf("\tEnter Gender: ");
    scanf("%s",&gender);
    strcpy(users[count].gender,gender);
    strcpy(users[count].name,name);
    strcpy(users[count].phone,phone);
    strcpy(users[count].email,email);
    strcpy(users[count].adress,adress);

    id[count]=count+1;
    count++;

    printf("\n User Added Successfully....\n\n");
    printf("\n\n\tUser Id:%d",count);
}
void viewUsers()
{

    printf("\n\n");
    printf("|   Name     |    Phone  |        Email       |    Adress     | Gender   |   Id   |\n");
    printf("|------------|-----------|--------------------|---------------|----------|--------|\n");

    for(i=0; i<count; i++)
    {

        printf("|");
        printf("%s",users[i].name);
        for(j=0; j < (12-strlen(users[i].name)); j++)
        {
            printf(" ");
        }
        printf("|");
        printf("%s",users[i].phone);
        for(j=0; j < (11-strlen(users[i].phone)); j++)
        {
            printf(" ");
        }
        printf("|");
        printf("%s",users[i].email);
        for(j=0; j < (20-strlen(users[i].email)); j++)
        {
            printf(" ");
        }
        printf("|");
        printf("%s",users[i].adress);
        for(j=0;j<(15-strlen(users[i].adress)); j++)
        {
            printf(" ");
        }
        printf("|");
        printf("%s",users[i].gender);
        for(j=0; j < (10-strlen(users[i].gender)); j++)
        {
            printf(" ");
        }
        printf("|");
        printf("%d",id[i]);
        for(j=0; j <7; j++)
        {
            printf(" ");
        }

        printf("|\n");
        printf("|------------|-----------|--------------------|---------------|----------|--------|\n");

    }
    printf("\n");
}
void addRequest()
{

    char name[300];
    char phone[300];
    char email[300];
    char adress[300];
    char gender[300];
    printf("\n\tNew connection request>>\n\n");
    printf("\tEnter Name: ");
    scanf("%s",&name);
    printf("\tEnter Phone number: ");
    scanf("%s",&phone);
    printf("\tEnter Email: ");
    scanf("%s",&email);
    printf("\tEnter Adress: ");
    scanf("%s",&adress);

    strcpy(request[flag].name,name);
    strcpy(request[flag].phone,phone);
    strcpy(request[flag].email,email);
    strcpy(request[flag].adress,adress);


    flag++;

    printf("\n Request Added Successfully....\n\n");
}
void viewRequest()
{
    printf("\n\n\n");
    printf("\tRequest Details:\n\n");
    for(i=0;i<flag;i++)
    {
    printf("\tName: %s\n",request[i].name);
    printf("\tContact: %s\n",request[i].phone);
    printf("\tEmail: %s\n",request[i].email);
    printf("\tAddress: %s\n",request[i].adress);
    printf("\tStatus: Pending.");
    printf("\n\n");
    }
}
void userGuideline()
{
    printf("\n\t\tHow it Works:\n\n");
    printf("\t** You have to fill every  field to save your data properly.\n");
    printf("\t** A users Name can be maximum 20 characters long.\n");
    printf("\t** Email can be maximum 30 characters long and unique for every users.\n");
    printf("\t** Users Phone number can be maximum 11 characters long and unique for every users.\n");
    printf("\t**Adress should be valid or you will be rejected.\n");

    printf("\t  To know more about our activities, visit https://bpdb.gov.bd/ -\n\n");
}
void exit1()
{
    system("cls");
     printf("\n\n\tThank You For Your Query.");
    printf("\n\tBest Wishes.");
    return 0;
}

