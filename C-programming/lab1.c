#include<stdio.h>
#include<conio.h>
struct entry
{
    char fname[20];
    char lname[20];
    char phone[10];
};
struct entry list[3];
int i;

int main()
{
    for(i=0; i<3; i++)
    {

        printf("\nEnter first name:");
        scanf("%s",list[i].fname);
        printf("Enter last name:");
        scanf("%s",list[i].lname);
        printf("Enter phone in 123-456 format:");
        scanf("%s",list[i].phone);

    }
    printf("\n\n");


    for(i=0; i<3; i++)
    {
        printf("Name: %s%s",list[i].fname,list[i].lname);
        printf("\t\tPhone: %s\n",list[i].phone);

    }
    return 0;
    getch();



}
