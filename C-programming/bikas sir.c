#include<stdio.h>
int main()
{
    int T;
    float c,k,f;
    printf("Enter the number 1 to 5: \n");
    scanf("%d",&T);
    if(T==1){
        scanf("%f",&c);
        f=(9*c+160)/5;
        k=c+273;
        printf("Temperature in F=%0.2f\n",f);
        printf("Temperature in K=%0.2f\n",k);
    }
    else if(T==2){
        scanf("%f",&f);
        c=(5*f-160)/9;
        k=(f-32)*0.5555+273;
        printf("Temperature in C=%0.2f\n",c);
        printf("Temperature in K=%0.2f\n",k);
    }
    else if(T==3){
        scanf("%f",&k);
        f=(k-273)*1.8+32;
        c=k-273;
        printf("Temperature in F=%0.2f\n",f);
        printf("Temperature in C=%0.2f\n",c);
    }
    return 0;
}
