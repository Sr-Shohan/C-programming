#include<stdio.h>
int fact(int n)
{
    int i,r=1;
    if(n>1){
        for(i=2;i<=n;i++)
            r=r*i;
    }
    return r;
}
int main()
{
    int a,facts;
    scanf("%d",&a);
    facts=fact(a);
    printf("%d",facts);

    return 0;

}
