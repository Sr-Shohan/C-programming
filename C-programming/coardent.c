#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>=1 && b>=1)
        printf("1st\n");
    else if(a<0 && b>=1)
        printf("2nd\n");
    else if(a<0 && b<0)
        printf("3rd\n");
    else if(a>=1 && b<0)
        printf("4th\n");
    else
        printf("not vaild\n");
    return 0;
}
