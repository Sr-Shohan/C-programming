#include<stdio.h>
int main()
{
    int a=0,c=0;
    int b=1,sum,i,p,n;

    int arr[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        sum=a+b;
        a=b;
        b=sum;
        arr[i]=a;
        c++;

    }
    scanf("%d",&p);
    printf("%d\n",arr[p]);
    printf("%d",c);
    return 0;
}
