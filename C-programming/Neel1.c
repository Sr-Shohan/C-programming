
#include<stdio.h>
int main ()
{
    int a;
    scanf("%d", &a);
int p;
p=&a;
    printf("Enter a number %d\n", a);
    printf("The location is %p", p);
    return 0;
}
