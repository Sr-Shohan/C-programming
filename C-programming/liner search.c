#include<stdio.h>
int main()
{
    int n,i,search;
    int arr[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element to search\n");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(arr[i]==search)
            printf("Position is %d\n",i+1);

    }
    return 0;
}
