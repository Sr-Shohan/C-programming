#include<stdio.h>
int main()
{
    int a,b,c,sum;
    float avg;
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    avg=(float)sum/3;
    printf("sum is = %d\n",sum);
    printf("Average is = %0.3f\n",avg);
    return 0;


}
