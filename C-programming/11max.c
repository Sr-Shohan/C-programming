#include<stdio.h>
int max(int i,int n,int a[])
{

    int m;
    if(i==n-1) return a[i];
    m=max(i+1,n,a);
    return ((a[i]>m ? a[i]:m));
}










int main()
{
    int n,a[100],m,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    m=max(0,n,a);
    printf("%d",m);
    return 0;
}
