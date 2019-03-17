#include<stdio.h>
int main()
{
    int i,n,search,a[100],count=0;
    printf("ENter the number of elements :");
    scanf("%d",&n);

    printf("Enter %d integer :",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter the finding value:");
    scanf("%d",&search);

    for(i=0;i<n;i++){
        if(a[i]==search){
            printf("%d present at location %d\n",search,i+1);
        count++;
        }
    }
    if(count=0)
        printf("not found in list");
    else
        printf("%d present  %d time in array\n",search,count);


    return 0;

   }
