 # include <stdio.h>
int main ()
{
int a, n, sum=0;
scanf("%d", &a);
for(n=1; n<=(a/2); n++)
    if (a%n==0)
    sum=sum+n;
if (sum==a)
    printf("Perfect");
else
    printf("Not perfect");
    return 0;
}
