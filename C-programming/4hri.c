#include<stdio.h>
int main()
{
    int k;
    float t;
    scanf("%d",&k);

    if(k>=1 && k<=100){
            t=k*3.38;
        printf("Total: %0.2f Taka\n",t);
    }
    else if(k>=101 && k<=200){
        t=k*5.12;
        printf("Total: %0.2f Taka\n",t);
    }
    else if(k>=201 && k<=400){
        t=k*6.56;
        printf("Total: %0.2f Taka\n",t);
    }
    else{
        t=k*8.22;
        printf("Total: %0.2f Taka\n",t);
    }
    return 0;
}

