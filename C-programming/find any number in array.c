#include<stdio.h>
int main()
{
    int ar[100],i,s,n;
    printf("Enter arry range:");
    scanf("%d",&n);


    printf("Enter the elements of array:");
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
    printf("Enter the number you want to search:");
    scanf("%d",&s);

    for(i=0;i<n;i++){
        if(ar[i]==s)
    {
        printf("%d is present at location %d\n",s,i+1);
        break;
    }
    }
    if(i==n)
        printf("%d is not available in the array.\n",s);
    return 0;

}
