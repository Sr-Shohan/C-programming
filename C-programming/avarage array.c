#include<stdio.h>
int main()
{
    int arr[100];
    int sum=0,i,n,avg;
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }


     avg=sum/n;
     printf("%d\n",avg);
     printf("sum is = %d",sum);
    return 0;
}
