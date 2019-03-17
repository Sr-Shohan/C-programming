#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int sum=0,d,n;
    scanf("%d",&n);
    while(n!=0){

        d=n%10;
        sum=sum+d;
        n=n/10;
    }
    printf("%d\n",sum);

    return 0;
}
