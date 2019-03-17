#include<stdio.h>
#include<conio.h>
int main()
{
    double i,a,b,t,sum=0;
    for(i=1;i<=5;i++){
        a=pow(5,i);
        b=2*i;
        t=a/b;
        sum=sum+t;
    }
    printf("The answer is %0.2lf\n",sum);

    return 0;
}

