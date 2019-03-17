#include<stdio.h>
int main()
{
    int x=1000,cnt=0;
    while(x%2==0){
        x=x/2;
        cnt++;

        printf("%d\n",x);
        printf("%d\n",cnt);
    }
    for( x=1;x*2<1000;x*=2);
    printf("%d\n");
    return 0;

}
