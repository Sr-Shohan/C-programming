#include<stdio.h>
int fibo(int i)
{
    if(i==0)
        return 0;
    if(i==1)
        return 1;
    else

         return (fibo(i-1)+fibo(i-2));
}


int main(){



    int a,f;
    printf("Enter a number:");
    scanf("%d",&a);
    f=fibo(a);
    printf("%d",f);
    return 0;
}
