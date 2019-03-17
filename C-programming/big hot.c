#include<stdio.h>
int main()
{
    int T;
    float c,k,f,Rn,Rm;
    printf("Enter the number 1 to 5: \n");
    scanf("%d",&T);
    switch(T){
    case 1:
        scanf("%f",&c);
        f=(9*c+160)/5;
        k=c+273;
        Rm=(4*c)/5;
        Rn=(9*c+2460)/5;
        printf("Temperature in F=%0.2f\n",f);
        printf("Temperature in K=%0.2f\n",k);
        printf("Temperature in Rm=%0.2f\n",Rm);
        printf("Temperature in Rn=%0.2f\n",Rn);
        break;

    case 2:
        scanf("%f",&f);
        c=(5*f-160)/9;
        k=(f-32)*0.5555+273;
        Rm=(4*f-128)/9;
        Rn=f+460;
        printf("Temperature in C=%0.2f\n",c);
        printf("Temperature in K=%0.2f\n",k);
        printf("Temperature in Rm=%0.2f\n",Rm);
        printf("Temperature in Rn=%0.2f\n",Rn);
        break;

    case 3:
        scanf("%f",&k);
        f=(k-273)*1.8+32;
        c=k-273;
        Rm=(4*k-1092)/5;
        Rn=(9*k+3)/5;
        printf("Temperature in F=%0.2f\n",f);
        printf("Temperature in C=%0.2f\n",c);
        printf("Temperature in Rm=%0.2f\n",Rm);
        printf("Temperature in Rn=%0.2f\n",Rn);
        break;

    case 4:
        scanf("%f",&Rm);
        c=(5*Rm)/4;
        f=(Rm/36)+32;
        k=(Rm/20)+273;
        Rn=(9*Rm+1968)/4;
        printf("Temperature in F=%0.2f\n",c);
        printf("Temperature in C=%0.2f\n",f);
        printf("Temperature in K=%0.2f\n",k);
        printf("Temperature in Rn=%0.2f\n",Rn);

    case 5:
        scanf("%f",&Rn);
        c=(5*Rn-2460)/9;
        f=Rn-460;
        k=(5*Rn-3)/9;
        Rm=(4*Rn-1968)/9;
        printf("Temperature in F=%0.2f\n",c);
        printf("Temperature in C=%0.2f\n",f);
        printf("Temperature in K=%0.2f\n",k);
        printf("Temperature in K=%0.2f\n",Rm);

    default :
        printf("Don't cross your limit\n");
    }
    return 0;
}
