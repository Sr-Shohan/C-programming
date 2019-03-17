#include<stdio.h>
int main()
{
    int a,b,c,t,i,j,n;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        a=0;b=1;
        for(j=1;j<=n;j++){
                if(j==n)
        printf("%d\n",a);
        c=a+b;
            a=b;
            b=c;
            }
    }
    return 0;
}
