#include<stdio.h>
int main()
{
    int i,n,f=0;
    scanf("%d",&n);
    for(i=1; i<100; i++)
    {
        for(i=2; i<=n/2; i++)

            if(n%i==0)
            {
                f=1;
                break;
            }
        if(f==0)
            printf("%d",n);

            n++;
    }

    return 0;

}
