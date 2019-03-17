#include<stdio.h>
int main()
{
    int a[10]={2,1,11,3,4,5,6,7,8,10},i;

    for(i=0;i<10;i++)
    {
        printf("%d  ",a[i]);
    }
    printf("\n");
    for(i=9;i>=0;i--){
        printf("%d  ",a[i]);
    }
    return 0;
}
