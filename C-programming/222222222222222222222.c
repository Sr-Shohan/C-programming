#include<stdio.h>


int sum (int a,int b)
{
    int sum=a+b;
    return sum;
}
int sub(int a,int b)
{
  int  sub=a-b;
    return sub;
}
int multi(int a,int b)
{
   int multi=a*b;
    return multi;
}
float div(int a,int b)
{
   float div=(float)a/b;

    return div;
}
int rem(int a,int b)
{
   int rem=a%b;
    return rem;
}



int main(){
    int a,b,c;
    printf("please enter the value of a &  b :");
    scanf("%d%d",&a,&b);
    c=sum(a,b);
    printf("the sum is %d\n",c);
    c=sub(a,b);
    printf("the sub is %d\n",c);
    c=multi(a,b);
    printf("the multi is %d\n",c);
    float d;
    d=div(a,b);
    printf("the div is %.2f\n",d);
    c=rem(a,b);
    printf("the rem is %d\n",c);






    return 0;
}
