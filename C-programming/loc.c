#include<stdio.h>
struct resturant{
char name[20];
char location[30];
int shopno;
}all[5];

int main()
{

    int a,b,i,t;

    for(i=0;i<2;i++)
    {     printf("Enter no. %d Name :\n",i+1);
       scanf("%s",&all[i].name);
       printf("Enter no. %d Location : \n",i+1);
       scanf("%s",&all[i].location);
       printf("Enter no. %d Shop no. : \n",i+1);
       scanf("%d",&all[i].shopno);
    }

    for(i=0;i<2;i++)
    {
        printf("shop %i Information : ",i+1);

        printf("Name = %s\n",all[i].name);
        printf("Location = %s\n",all[i].location);
        printf("Shop no = %d\n\n\n\n",all[i].shopno);


    }




    return 0;
}
