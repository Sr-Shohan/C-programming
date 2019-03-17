#include<stdio.h>
int main()
{
    int n,i,lwp,sum=0;
    scanf("%d",&n);
    if(i!=0&&i!=n){
    for(i=1;i<=lwp;i++){
         lwp=i*(n-i+1);
            sum=sum+lwp;
         printf("%d\n",lwp);

    }
    printf("%d",sum);
    }

    else
        printf("Not possible");
    return 0;
}
