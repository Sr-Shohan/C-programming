#include<stdio.h>
int main()
{
    int first,last,mid,n,i,search,a[100];
    printf("Enter the number of elements:");
    scanf("%d",&n);

    printf("Enter %d integer: ",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("Enter value to find:");
    scanf("%d",&search);

    first=0;
    last=n-1;
    mid=(first+last)/2;

    while(first<=last){
            if(a[mid]<search)
              first=mid+1;
           else if(a[mid]==search){
            printf("%d is found location at %d",search,mid+1);
           break;
           }
           else
            last=mid-1;
           mid=(first+last)/2;
    }
    if(first>last)
        printf("NOt found in this list");


return 0;
}
