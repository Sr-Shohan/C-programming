#include<stdio.h>
#define n 5
int main()
{
    int data[n]={5,3,2,4,1};
    int i,j,item;
    printf("Original data items :\n");
     for(i=0;i<n;i++)
     {
         printf("%d ",data[i]);
     }
     printf("\n");

     for(i=1;i<n;i++)
     {
         item=data[i];
         j=i-1;
         while(j>=0 && data[j]>item)
         {
             j=j-1;
         }
         data[j+1]=item;
     }
     printf("data in ascending order \n");
      for(i=0;i<n;i++)
      {
          printf("%d ",data[i]);
      }
      return 0;
}
